/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-present Facebook, Inc. (http://www.facebook.com)  |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#pragma once

#include "hphp/util/hdf.h"
#include "hphp/runtime/server/ip-block-map.h"
#include "hphp/runtime/base/ini-setting.h"

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

struct VirtualHost {
  static VirtualHost &GetDefault();

  static VirtualHost* Resolve(const std::string& host);
  static void SetCurrent(VirtualHost *vhost);
  static const VirtualHost *GetCurrent();
  static int64_t GetMaxPostSize();
  static int64_t GetLowestMaxPostSize();
  static int64_t GetUploadMaxFileSize();
  static void UpdateSerializationSizeLimit();
  static const std::vector<std::string> &GetAllowedDirectories();
  static void SortAllowedDirectories(std::vector<std::string>& dirs);
  static bool IsDefault(const IniSetting::Map &ini, const Hdf &vh,
                        const std::string &ini_key = "");
public:
  VirtualHost();
  VirtualHost(const IniSetting::Map& ini, const Hdf& vh,
              const std::string &ini_key = "");

  void init(const IniSetting::Map& ini, const Hdf& vh,
            const std::string &ini_key = "");
  void addAllowedDirectories(const std::vector<std::string>& dirs);
  int getRequestTimeoutSeconds(int defaultTimeout) const;
  int64_t getMaxPostSize() const;

  const std::string &getName() const { return m_name;}
  const std::string &getPathTranslation() const { return m_pathTranslation;}
  const std::string &getDocumentRoot() const { return m_documentRoot;}
  const std::map<std::string, std::string> &getServerVars() const {
    return m_serverVars;
  }
  std::string serverName(const std::string &host) const;

  bool valid() const { return !(m_prefix.empty() && !m_pattern); }
  bool match(const String &host) const;
  bool disabled() const { return m_disabled; }

  // whether to check (and serve) files that exist before applying rewrite rules
  bool checkExistenceBeforeRewrite() const {
    return m_checkExistenceBeforeRewrite;
  }
  // should we always decode the post data as if it were
  // application/x-www-form-urlencoded
  bool alwaysDecodePostData(const String& url) const;

  // url rewrite rules
  bool rewriteURL(const String& host, String &url,
                  bool &qsa, int &redirect) const;

  // ip blocking rules
  bool isBlocking(const std::string &command, const std::string &ip) const;

  // query string filters
  bool hasLogFilter() const { return !m_queryStringFilters.empty();}
  std::string filterUrl(const std::string &url) const;

private:
  struct RewriteCond {
    enum class Type {
      Request,
      Host
    };
    Type type;
    StringData* pattern;
    bool negate = false;
  };

  struct RewriteRule {
    StringData* pattern;
    std::string to;
    bool qsa = false; // whether to append original query string
    bool encode_backrefs = false;
    int redirect = 0;  // redirect status code (301 or 302) or 0 for no redirect
    std::vector<RewriteCond> rewriteConds;
  };

  struct QueryStringFilter {
    std::string urlPattern;  // matching URLs
    std::string namePattern; // matching parameter names
    std::string replaceWith; // what to replace with
  };

  struct VhostRuntimeOption {
  public:
    int requestTimeoutSeconds = -1;
    int64_t maxPostSize = -1;
    int64_t uploadMaxFileSize = -1;
    std::vector<std::string> allowedDirectories;
    int64_t serializationSizeLimit = StringData::MaxSize;
  };

  void initRuntimeOption(const IniSetting::Map& ini, const Hdf& overwrite);
  bool m_disabled = false;
  bool m_checkExistenceBeforeRewrite = true;
  bool m_alwaysDecodePostData = true;
  std::set<std::string, stdltistr> m_decodePostDataBlackList;
  std::string m_name;
  std::string m_prefix;
  StringData* m_pattern{nullptr};

  std::string m_serverName;
  std::map<std::string, std::string> m_serverVars;
  std::string m_pathTranslation;
  std::string m_documentRoot;

  std::vector<RewriteRule> m_rewriteRules;
  std::shared_ptr<IpBlockMap> m_ipBlocks;
  std::vector<QueryStringFilter> m_queryStringFilters;

  VhostRuntimeOption m_runtimeOption;
};

///////////////////////////////////////////////////////////////////////////////
}

