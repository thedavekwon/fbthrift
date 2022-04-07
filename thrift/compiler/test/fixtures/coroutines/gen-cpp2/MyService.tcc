/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/coroutines/gen-cpp2/MyService.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> MyService_ping_pargs;
typedef apache::thrift::ThriftPresult<true> MyService_ping_presult;
typedef apache::thrift::ThriftPresult<false> MyService_getRandomData_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::string, ::std::string*>> MyService_getRandomData_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, ::std::int64_t*>> MyService_hasDataById_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, bool*>> MyService_hasDataById_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, ::std::int64_t*>> MyService_getDataById_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::string, ::std::string*>> MyService_getDataById_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, ::std::int64_t*>, apache::thrift::FieldData<2, ::apache::thrift::type_class::string, ::std::string*>> MyService_putDataById_pargs;
typedef apache::thrift::ThriftPresult<true> MyService_putDataById_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_ping(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &MyServiceAsyncProcessor::process_ping<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::executeRequest_ping(apache::thrift::ServerRequest&& serverRequest) {
  auto scope = iface_->getRequestExecutionScope(serverRequest.requestContext(), apache::thrift::concurrency::NORMAL);
  serverRequest.requestContext()->setRequestExecutionScope(std::move(scope));
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::MyService_ping_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.ping", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "ping", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , nullptr
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "ping");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::requestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::concurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_ping<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_ping<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification.first, requestPileNotification.second
    , concurrencyControllerNotification.first, concurrencyControllerNotification.second
    );
  iface_->async_tm_ping(std::move(callback));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_ping(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::MyService_ping_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.ping", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew, std::move(req), ctx, eb, "ping");
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_ping<ProtocolIn_,ProtocolOut_>, throw_wrapped_ping<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  iface_->async_tm_ping(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse MyServiceAsyncProcessor::return_ping(apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  ::cpp2::MyService_ping_presult result;
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_ping(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "ping");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_getRandomData(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &MyServiceAsyncProcessor::process_getRandomData<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::executeRequest_getRandomData(apache::thrift::ServerRequest&& serverRequest) {
  auto scope = iface_->getRequestExecutionScope(serverRequest.requestContext(), apache::thrift::concurrency::NORMAL);
  serverRequest.requestContext()->setRequestExecutionScope(std::move(scope));
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::MyService_getRandomData_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.getRandomData", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "getRandomData", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , nullptr
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "getRandomData");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::requestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::concurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_getRandomData<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_getRandomData<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification.first, requestPileNotification.second
    , concurrencyControllerNotification.first, concurrencyControllerNotification.second
    );
  iface_->async_tm_getRandomData(std::move(callback));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_getRandomData(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::MyService_getRandomData_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.getRandomData", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew, std::move(req), ctx, eb, "getRandomData");
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>>(std::move(req), std::move(ctxStack), return_getRandomData<ProtocolIn_,ProtocolOut_>, throw_wrapped_getRandomData<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  iface_->async_tm_getRandomData(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse MyServiceAsyncProcessor::return_getRandomData(apache::thrift::ContextStack* ctx, ::std::string const& _return) {
  ProtocolOut_ prot;
  ::cpp2::MyService_getRandomData_presult result;
  result.get<0>().value = const_cast<::std::string*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_getRandomData(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "getRandomData");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_hasDataById(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &MyServiceAsyncProcessor::process_hasDataById<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::executeRequest_hasDataById(apache::thrift::ServerRequest&& serverRequest) {
  auto scope = iface_->getRequestExecutionScope(serverRequest.requestContext(), apache::thrift::concurrency::NORMAL);
  serverRequest.requestContext()->setRequestExecutionScope(std::move(scope));
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::MyService_hasDataById_pargs args;
  ::std::int64_t uarg_id{0};
  args.get<0>().value = &uarg_id;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.hasDataById", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "hasDataById", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , nullptr
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "hasDataById");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::requestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::concurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<bool>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_hasDataById<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_hasDataById<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification.first, requestPileNotification.second
    , concurrencyControllerNotification.first, concurrencyControllerNotification.second
    );
  iface_->async_tm_hasDataById(std::move(callback), args.get<0>().ref());
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_hasDataById(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::MyService_hasDataById_pargs args;
  ::std::int64_t uarg_id{0};
  args.get<0>().value = &uarg_id;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.hasDataById", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew, std::move(req), ctx, eb, "hasDataById");
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<bool>>(std::move(req), std::move(ctxStack), return_hasDataById<ProtocolIn_,ProtocolOut_>, throw_wrapped_hasDataById<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  iface_->async_tm_hasDataById(std::move(callback), args.get<0>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse MyServiceAsyncProcessor::return_hasDataById(apache::thrift::ContextStack* ctx, bool const& _return) {
  ProtocolOut_ prot;
  ::cpp2::MyService_hasDataById_presult result;
  result.get<0>().value = const_cast<bool*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_hasDataById(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "hasDataById");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_getDataById(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, nullptr, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  process_getDataById<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(serializedRequest), ctx, eb, tm);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::executeRequest_getDataById(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::MyService_getDataById_pargs args;
  ::std::int64_t uarg_id{0};
  args.get<0>().value = &uarg_id;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.getDataById", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "getDataById", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , nullptr
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "getDataById");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::requestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::concurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_getDataById<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_getDataById<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , nullptr
    , serverRequest.requestContext()
    , requestPileNotification.first, requestPileNotification.second
    , concurrencyControllerNotification.first, concurrencyControllerNotification.second
    );
  iface_->async_eb_getDataById(std::move(callback), args.get<0>().ref());
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_getDataById(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager*) {
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::MyService_getDataById_pargs args;
  ::std::int64_t uarg_id{0};
  args.get<0>().value = &uarg_id;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.getDataById", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew, std::move(req), ctx, eb, "getDataById");
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>>(std::move(req), std::move(ctxStack), return_getDataById<ProtocolIn_,ProtocolOut_>, throw_wrapped_getDataById<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, nullptr, ctx);
  iface_->async_eb_getDataById(std::move(callback), args.get<0>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse MyServiceAsyncProcessor::return_getDataById(apache::thrift::ContextStack* ctx, ::std::string const& _return) {
  ProtocolOut_ prot;
  ::cpp2::MyService_getDataById_presult result;
  result.get<0>().value = const_cast<::std::string*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_getDataById(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "getDataById");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_putDataById(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &MyServiceAsyncProcessor::process_putDataById<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::executeRequest_putDataById(apache::thrift::ServerRequest&& serverRequest) {
  auto scope = iface_->getRequestExecutionScope(serverRequest.requestContext(), apache::thrift::concurrency::NORMAL);
  serverRequest.requestContext()->setRequestExecutionScope(std::move(scope));
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::MyService_putDataById_pargs args;
  ::std::int64_t uarg_id{0};
  args.get<0>().value = &uarg_id;
  auto uarg_data = std::make_unique<::std::string>();
  args.get<1>().value = uarg_data.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.putDataById", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "putDataById", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , nullptr
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "putDataById");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::requestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::concurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_putDataById<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_putDataById<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification.first, requestPileNotification.second
    , concurrencyControllerNotification.first, concurrencyControllerNotification.second
    );
  iface_->async_tm_putDataById(std::move(callback), args.get<0>().ref(), std::move(uarg_data));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_putDataById(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::MyService_putDataById_pargs args;
  ::std::int64_t uarg_id{0};
  args.get<0>().value = &uarg_id;
  auto uarg_data = std::make_unique<::std::string>();
  args.get<1>().value = uarg_data.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.putDataById", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew, std::move(req), ctx, eb, "putDataById");
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_putDataById<ProtocolIn_,ProtocolOut_>, throw_wrapped_putDataById<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  iface_->async_tm_putDataById(std::move(callback), args.get<0>().ref(), std::move(uarg_data));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse MyServiceAsyncProcessor::return_putDataById(apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  ::cpp2::MyService_putDataById_presult result;
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_putDataById(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "putDataById");
    return;
  }
}


} // cpp2
