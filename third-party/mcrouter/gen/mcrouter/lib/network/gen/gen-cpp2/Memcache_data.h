/**
 * Autogenerated by Thrift for Memcache.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "mcrouter/lib/network/gen/gen-cpp2/Memcache_types.h"

namespace apache { namespace thrift {



template <> struct TStructDataStorage<::facebook::memcache::thrift::McGetRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
    "flags",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_I64,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McGetReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 5;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "value",
    "flags",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
    5,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRING,
    TType::T_I64,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McSetRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 4;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
    "exptime",
    "flags",
    "value",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_I32,
    TType::T_I64,
    TType::T_STRING,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McSetReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 5;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "flags",
    "value",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
    5,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_I64,
    TType::T_STRING,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McDeleteRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 5;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
    "flags",
    "exptime",
    "value",
    "attributes",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
    5,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_I64,
    TType::T_I32,
    TType::T_STRING,
    TType::T_MAP,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McDeleteReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 5;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "flags",
    "value",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
    5,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_I64,
    TType::T_STRING,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McLeaseGetRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
    "flags",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_I64,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McLeaseGetReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 6;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "leaseToken",
    "value",
    "flags",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
    5,
    6,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_I64,
    TType::T_STRING,
    TType::T_I64,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McLeaseSetRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 5;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
    "exptime",
    "flags",
    "value",
    "leaseToken",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
    5,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_I32,
    TType::T_I64,
    TType::T_STRING,
    TType::T_I64,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McLeaseSetReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 3;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McAddRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 4;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
    "exptime",
    "flags",
    "value",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_I32,
    TType::T_I64,
    TType::T_STRING,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McAddReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 3;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McReplaceRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 4;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
    "exptime",
    "flags",
    "value",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_I32,
    TType::T_I64,
    TType::T_STRING,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McReplaceReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 3;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McGetsRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
    "flags",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_I64,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McGetsReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 6;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "casToken",
    "value",
    "flags",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
    5,
    6,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_I64,
    TType::T_STRING,
    TType::T_I64,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McCasRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 5;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
    "exptime",
    "flags",
    "value",
    "casToken",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
    5,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_I32,
    TType::T_I64,
    TType::T_STRING,
    TType::T_I64,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McCasReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 3;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McIncrRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
    "delta",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_I64,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McIncrReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 4;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "delta",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_I64,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McDecrRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
    "delta",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_I64,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McDecrReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 4;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "delta",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_I64,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McMetagetRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 1;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McMetagetReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 7;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "age",
    "exptime",
    "ipv",
    "ipAddress",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
    5,
    6,
    7,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_I32,
    TType::T_I32,
    TType::T_I16,
    TType::T_STRING,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McAppendRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 4;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
    "exptime",
    "flags",
    "value",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_I32,
    TType::T_I64,
    TType::T_STRING,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McAppendReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 3;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McPrependRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 4;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
    "exptime",
    "flags",
    "value",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_I32,
    TType::T_I64,
    TType::T_STRING,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McPrependReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 3;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McTouchRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
    "exptime",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_I32,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McTouchReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 3;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McFlushReRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 1;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McFlushReReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 3;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McFlushAllRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "key",
    "delay",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_I32,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McFlushAllReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 3;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McGatRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "exptime",
    "key",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRING,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McGatReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 5;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "value",
    "flags",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
    5,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRING,
    TType::T_I64,
    TType::T_STRING,
    TType::T_I16,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McGatsRequest> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "exptime",
    "key",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRING,
  }};
};


template <> struct TStructDataStorage<::facebook::memcache::thrift::McGatsReply> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 6;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "result",
    "casToken",
    "value",
    "flags",
    "message",
    "appSpecificErrorCode",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
    5,
    6,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_I64,
    TType::T_STRING,
    TType::T_I64,
    TType::T_STRING,
    TType::T_I16,
  }};
};


}} // apache::thrift
