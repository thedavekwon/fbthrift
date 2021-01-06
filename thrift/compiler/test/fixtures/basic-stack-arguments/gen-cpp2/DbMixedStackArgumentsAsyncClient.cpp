/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/DbMixedStackArgumentsAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::string, ::std::string*>> DbMixedStackArguments_getDataByKey0_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::binary, ::std::string*>> DbMixedStackArguments_getDataByKey0_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::string, ::std::string*>> DbMixedStackArguments_getDataByKey1_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::binary, ::std::string*>> DbMixedStackArguments_getDataByKey1_presult;

template <typename Protocol_>
void DbMixedStackArgumentsAsyncClient::getDataByKey0T(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const ::std::string& key) {
  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  DbMixedStackArguments_getDataByKey0_pargs args;
  args.get<0>().value = const_cast<::std::string*>(&key);
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, rpcOptions, std::move(callback), ctx->ctx, std::move(header), channel_.get(), "getDataByKey0", writer, sizer);
  ctx->reqContext.setRequestHeader(nullptr);
}

template <typename Protocol_>
void DbMixedStackArgumentsAsyncClient::getDataByKey1T(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const ::std::string& key) {
  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  DbMixedStackArguments_getDataByKey1_pargs args;
  args.get<0>().value = const_cast<::std::string*>(&key);
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, rpcOptions, std::move(callback), ctx->ctx, std::move(header), channel_.get(), "getDataByKey1", writer, sizer);
  ctx->reqContext.setRequestHeader(nullptr);
}



void DbMixedStackArgumentsAsyncClient::getDataByKey0(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& key) {
  ::apache::thrift::RpcOptions rpcOptions;
  getDataByKey0(rpcOptions, std::move(callback), key);
}

void DbMixedStackArgumentsAsyncClient::getDataByKey0(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& key) {
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(),
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "DbMixedStackArguments.getDataByKey0");
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  callbackContext.ctx = std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx);
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  getDataByKey0Impl(rpcOptions, std::move(ctx), std::move(wrappedCallback), key);
}

void DbMixedStackArgumentsAsyncClient::getDataByKey0Impl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const ::std::string& key) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      getDataByKey0T(&writer, rpcOptions, std::move(ctx), std::move(callback), key);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      getDataByKey0T(&writer, rpcOptions, std::move(ctx), std::move(callback), key);
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

void DbMixedStackArgumentsAsyncClient::sync_getDataByKey0(::std::string& _return, const ::std::string& key) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_getDataByKey0(rpcOptions, _return, key);
}

void DbMixedStackArgumentsAsyncClient::sync_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return, const ::std::string& key) {
  apache::thrift::ClientReceiveState _returnState;
  apache::thrift::ClientSyncCallback<false> callback(&_returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      protocolId,
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "DbMixedStackArguments.getDataByKey0");
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  getDataByKey0Impl(rpcOptions, ctx, std::move(wrappedCallback), key);
  callback.waitUntilDone(evb);
  _returnState.resetProtocolId(protocolId);
  _returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(!!_returnState.exception());
    _returnState.exception().throw_exception();
  }
  return folly::fibers::runInMainContext([&] {
      recv_getDataByKey0(_return, _returnState);
  });
}

folly::Try<apache::thrift::RpcResponseComplete<::std::string>>
DbMixedStackArgumentsAsyncClient::sync_complete_getDataByKey0(
    apache::thrift::RpcOptions& rpcOptions,  const ::std::string& key) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  const auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* const evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      protocolId,
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "DbMixedStackArguments.getDataByKey0");
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  getDataByKey0Impl(rpcOptions, ctx, std::move(wrappedCallback), key);

  callback.waitUntilDone(evb);
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));

  folly::Try<apache::thrift::RpcResponseComplete<::std::string>> tryResponse;
  if (!returnState.buf()) {
    assert(returnState.isException());
  	tryResponse.emplaceException(std::move(returnState.exception()));
  } else {
    tryResponse.emplace();
    tryResponse->responseContext.rpcSizeStats = returnState.getRpcSizeStats();
    if (auto* header = returnState.header()) {
      if (!header->getHeaders().empty()) {
  	    tryResponse->responseContext.headers = header->releaseHeaders();
      }
      if (auto load = header->getServerLoad()) {
        tryResponse->responseContext.serverLoad = *load;
      }
    }
    tryResponse->response = folly::makeTryWith([&] {
      return folly::fibers::runInMainContext([&] {
        ::std::string rv;
        recv_getDataByKey0(rv, returnState);
        return rv;
      });
    });
  }
  return tryResponse;
}

folly::Future<::std::string> DbMixedStackArgumentsAsyncClient::future_getDataByKey0(const ::std::string& key) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_getDataByKey0(rpcOptions, key);
}

folly::SemiFuture<::std::string> DbMixedStackArgumentsAsyncClient::semifuture_getDataByKey0(const ::std::string& key) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_getDataByKey0(rpcOptions, key);
}

folly::Future<::std::string> DbMixedStackArgumentsAsyncClient::future_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& key) {
  folly::Promise<::std::string> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::std::string>>(std::move(_promise), recv_wrapped_getDataByKey0, channel_);
  getDataByKey0(rpcOptions, std::move(callback), key);
  return _future;
}

folly::SemiFuture<::std::string> DbMixedStackArgumentsAsyncClient::semifuture_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& key) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_getDataByKey0, channel_);
  auto callback = std::move(callbackAndFuture.first);
  getDataByKey0(rpcOptions, std::move(callback), key);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> DbMixedStackArgumentsAsyncClient::header_future_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& key) {
  folly::Promise<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::std::string>>(std::move(_promise), recv_wrapped_getDataByKey0, channel_);
  getDataByKey0(rpcOptions, std::move(callback), key);
  return _future;
}

folly::SemiFuture<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> DbMixedStackArgumentsAsyncClient::header_semifuture_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& key) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_getDataByKey0, channel_);
  auto callback = std::move(callbackAndFuture.first);
  getDataByKey0(rpcOptions, std::move(callback), key);
  return std::move(callbackAndFuture.second);
}

void DbMixedStackArgumentsAsyncClient::getDataByKey0(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::string& key) {
  getDataByKey0(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), key);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper DbMixedStackArgumentsAsyncClient::recv_wrapped_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = DbMixedStackArguments_getDataByKey0_presult;
  constexpr auto const fname = "getDataByKey0";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void DbMixedStackArgumentsAsyncClient::recv_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_getDataByKey0(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void DbMixedStackArgumentsAsyncClient::recv_instance_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_getDataByKey0(_return, state);
}

folly::exception_wrapper DbMixedStackArgumentsAsyncClient::recv_instance_wrapped_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_getDataByKey0(_return, state);
}

void DbMixedStackArgumentsAsyncClient::getDataByKey1(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& key) {
  ::apache::thrift::RpcOptions rpcOptions;
  getDataByKey1(rpcOptions, std::move(callback), key);
}

void DbMixedStackArgumentsAsyncClient::getDataByKey1(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& key) {
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(),
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "DbMixedStackArguments.getDataByKey1");
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  callbackContext.ctx = std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx);
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  getDataByKey1Impl(rpcOptions, std::move(ctx), std::move(wrappedCallback), key);
}

void DbMixedStackArgumentsAsyncClient::getDataByKey1Impl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const ::std::string& key) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      getDataByKey1T(&writer, rpcOptions, std::move(ctx), std::move(callback), key);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      getDataByKey1T(&writer, rpcOptions, std::move(ctx), std::move(callback), key);
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

void DbMixedStackArgumentsAsyncClient::sync_getDataByKey1(::std::string& _return, const ::std::string& key) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_getDataByKey1(rpcOptions, _return, key);
}

void DbMixedStackArgumentsAsyncClient::sync_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return, const ::std::string& key) {
  apache::thrift::ClientReceiveState _returnState;
  apache::thrift::ClientSyncCallback<false> callback(&_returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      protocolId,
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "DbMixedStackArguments.getDataByKey1");
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  getDataByKey1Impl(rpcOptions, ctx, std::move(wrappedCallback), key);
  callback.waitUntilDone(evb);
  _returnState.resetProtocolId(protocolId);
  _returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(!!_returnState.exception());
    _returnState.exception().throw_exception();
  }
  return folly::fibers::runInMainContext([&] {
      recv_getDataByKey1(_return, _returnState);
  });
}

folly::Try<apache::thrift::RpcResponseComplete<::std::string>>
DbMixedStackArgumentsAsyncClient::sync_complete_getDataByKey1(
    apache::thrift::RpcOptions& rpcOptions,  const ::std::string& key) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  const auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* const evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      protocolId,
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "DbMixedStackArguments.getDataByKey1");
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  getDataByKey1Impl(rpcOptions, ctx, std::move(wrappedCallback), key);

  callback.waitUntilDone(evb);
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));

  folly::Try<apache::thrift::RpcResponseComplete<::std::string>> tryResponse;
  if (!returnState.buf()) {
    assert(returnState.isException());
  	tryResponse.emplaceException(std::move(returnState.exception()));
  } else {
    tryResponse.emplace();
    tryResponse->responseContext.rpcSizeStats = returnState.getRpcSizeStats();
    if (auto* header = returnState.header()) {
      if (!header->getHeaders().empty()) {
  	    tryResponse->responseContext.headers = header->releaseHeaders();
      }
      if (auto load = header->getServerLoad()) {
        tryResponse->responseContext.serverLoad = *load;
      }
    }
    tryResponse->response = folly::makeTryWith([&] {
      return folly::fibers::runInMainContext([&] {
        ::std::string rv;
        recv_getDataByKey1(rv, returnState);
        return rv;
      });
    });
  }
  return tryResponse;
}

folly::Future<::std::string> DbMixedStackArgumentsAsyncClient::future_getDataByKey1(const ::std::string& key) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_getDataByKey1(rpcOptions, key);
}

folly::SemiFuture<::std::string> DbMixedStackArgumentsAsyncClient::semifuture_getDataByKey1(const ::std::string& key) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_getDataByKey1(rpcOptions, key);
}

folly::Future<::std::string> DbMixedStackArgumentsAsyncClient::future_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& key) {
  folly::Promise<::std::string> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::std::string>>(std::move(_promise), recv_wrapped_getDataByKey1, channel_);
  getDataByKey1(rpcOptions, std::move(callback), key);
  return _future;
}

folly::SemiFuture<::std::string> DbMixedStackArgumentsAsyncClient::semifuture_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& key) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_getDataByKey1, channel_);
  auto callback = std::move(callbackAndFuture.first);
  getDataByKey1(rpcOptions, std::move(callback), key);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> DbMixedStackArgumentsAsyncClient::header_future_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& key) {
  folly::Promise<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::std::string>>(std::move(_promise), recv_wrapped_getDataByKey1, channel_);
  getDataByKey1(rpcOptions, std::move(callback), key);
  return _future;
}

folly::SemiFuture<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> DbMixedStackArgumentsAsyncClient::header_semifuture_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& key) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_getDataByKey1, channel_);
  auto callback = std::move(callbackAndFuture.first);
  getDataByKey1(rpcOptions, std::move(callback), key);
  return std::move(callbackAndFuture.second);
}

void DbMixedStackArgumentsAsyncClient::getDataByKey1(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::string& key) {
  getDataByKey1(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), key);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper DbMixedStackArgumentsAsyncClient::recv_wrapped_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = DbMixedStackArguments_getDataByKey1_presult;
  constexpr auto const fname = "getDataByKey1";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void DbMixedStackArgumentsAsyncClient::recv_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_getDataByKey1(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void DbMixedStackArgumentsAsyncClient::recv_instance_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_getDataByKey1(_return, state);
}

folly::exception_wrapper DbMixedStackArgumentsAsyncClient::recv_instance_wrapped_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_getDataByKey1(_return, state);
}


} // cpp2
