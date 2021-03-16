/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/MyService.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> MyService_foo_pargs;
typedef apache::thrift::ThriftPresult<true> MyService_foo_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_foo(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &MyServiceAsyncProcessor::process_foo<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_foo(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_foo_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.foo", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "foo");
    return;
  }
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_foo<ProtocolIn_,ProtocolOut_>, throw_wrapped_foo<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  iface_->async_tm_foo(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue MyServiceAsyncProcessor::return_foo(int32_t protoSeqId, apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  MyService_foo_presult result;
  return serializeResponse("foo", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_foo(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "foo");
    return;
  }
}


typedef apache::thrift::ThriftPresult<false> MyService_MyInteraction_frobnicate_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, ::std::int32_t*>> MyService_MyInteraction_frobnicate_presult;
typedef apache::thrift::ThriftPresult<false> MyService_MyInteraction_ping_pargs;
typedef apache::thrift::ThriftPresult<false> MyService_MyInteraction_truthify_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, bool*>>
    > MyService_MyInteraction_truthify_presult;
typedef apache::thrift::ThriftPresult<false> MyService_MyInteraction_encode_pargs;
typedef apache::thrift::ThriftPResultSink<
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::set<::apache::thrift::type_class::floating_point>, ::std::set<float>*>>,
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::string, ::std::string*>>,
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::binary, ::std::string*>>
    > MyService_MyInteraction_encode_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_MyInteraction_frobnicate(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_, "MyInteraction")) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &MyServiceAsyncProcessor::process_MyInteraction_frobnicate<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_MyInteraction_frobnicate(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_MyInteraction_frobnicate_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.MyInteraction.frobnicate", ctx));
  auto tile = ctx->getTile();
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "MyInteraction.frobnicate");
    return;
  }
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb, tile);
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<::std::int32_t>>(std::move(req), std::move(ctxStack), return_MyInteraction_frobnicate<ProtocolIn_,ProtocolOut_>, throw_wrapped_MyInteraction_frobnicate<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx, nullptr, tile);
  static_cast<MyServiceSvIf::MyInteractionIf*>(tile)->async_tm_frobnicate(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue MyServiceAsyncProcessor::return_MyInteraction_frobnicate(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::int32_t const& _return) {
  ProtocolOut_ prot;
  MyService_MyInteraction_frobnicate_presult result;
  result.get<0>().value = const_cast<::std::int32_t*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("MyInteraction.frobnicate", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_MyInteraction_frobnicate(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "MyInteraction.frobnicate");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_MyInteraction_ping(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, iface_, "MyInteraction")) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, &MyServiceAsyncProcessor::process_MyInteraction_ping<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_MyInteraction_ping(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_MyInteraction_ping_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.MyInteraction.ping", ctx));
  auto tile = ctx->getTile();
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    LOG(ERROR) << ex.what() << " in function ping";
    eb->runInEventBaseThread([req = std::move(req)] {});
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallbackBase>(std::move(req), std::move(ctxStack), nullptr, eb, tm, ctx, tile);
  static_cast<MyServiceSvIf::MyInteractionIf*>(tile)->async_tm_ping(std::move(callback));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_MyInteraction_truthify(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, iface_, "MyInteraction")) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, &MyServiceAsyncProcessor::process_MyInteraction_truthify<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_MyInteraction_truthify(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_MyInteraction_truthify_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.MyInteraction.truthify", ctx));
  auto tile = ctx->getTile();
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "MyInteraction.truthify");
    return;
  }
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb, tile);
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<bool>>>(std::move(req), std::move(ctxStack), return_MyInteraction_truthify<ProtocolIn_,ProtocolOut_>, throw_wrapped_MyInteraction_truthify<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx, apache::thrift::ServerInterface::getBlockingThreadManager(tm), tile);
  static_cast<MyServiceSvIf::MyInteractionIf*>(tile)->async_tm_truthify(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::ResponseAndServerStreamFactory MyServiceAsyncProcessor::return_MyInteraction_truthify(int32_t protoSeqId, apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, ::apache::thrift::ServerStream<bool>&& _return) {
  ProtocolOut_ prot;
  MyService_MyInteraction_truthify_presult::FieldsType result;
  using StreamPResultType = MyService_MyInteraction_truthify_presult::StreamPResultType;
  auto& returnStream = _return;

      using ExMapType = apache::thrift::detail::ap::EmptyExMapType;
  auto encodedStream = apache::thrift::detail::ap::encode_server_stream<ProtocolOut_, StreamPResultType, ExMapType>(std::move(returnStream), std::move(executor));
  return {serializeResponse("MyInteraction.truthify", &prot, protoSeqId, ctx, result), std::move(encodedStream)};
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_MyInteraction_truthify(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "MyInteraction.truthify");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_MyInteraction_encode(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINK, iface_, "MyInteraction")) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINK, &MyServiceAsyncProcessor::process_MyInteraction_encode<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_MyInteraction_encode(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_MyInteraction_encode_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.MyInteraction.encode", ctx));
  auto tile = ctx->getTile();
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "MyInteraction.encode");
    return;
  }
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb, tile);
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<::apache::thrift::ResponseAndSinkConsumer<::std::set<float>, ::std::string, ::std::string>>>(std::move(req), std::move(ctxStack), return_MyInteraction_encode<ProtocolIn_,ProtocolOut_>, throw_wrapped_MyInteraction_encode<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx, apache::thrift::ServerInterface::getBlockingThreadManager(tm), tile);
  static_cast<MyServiceSvIf::MyInteractionIf*>(tile)->async_tm_encode(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
std::pair<folly::IOBufQueue, apache::thrift::detail::SinkConsumerImpl> MyServiceAsyncProcessor::return_MyInteraction_encode(apache::thrift::ContextStack* ctx, ::apache::thrift::ResponseAndSinkConsumer<::std::set<float>, ::std::string, ::std::string>&& _return, folly::Executor::KeepAlive<> executor) {
  ProtocolOut_ prot;
  MyService_MyInteraction_encode_presult::FieldsType result;
  using SinkPResultType = MyService_MyInteraction_encode_presult::SinkPResultType;
  using FinalResponsePResultType = MyService_MyInteraction_encode_presult::FinalResponsePResultType;
  result.get<0>().value = &_return.response;
  result.setIsSet(0, true);

  using ExMapType = apache::thrift::detail::ap::EmptyExMapType;

  auto sinkConsumerImpl = apache::thrift::detail::ap::toSinkConsumerImpl<
      ProtocolIn_,
      ProtocolOut_,
      SinkPResultType,
      FinalResponsePResultType,
      ExMapType>(
      std::move(_return.sinkConsumer),
      std::move(executor));

  return {serializeResponse("MyInteraction.encode", &prot, 0, ctx, result), std::move(sinkConsumerImpl)};
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_MyInteraction_encode(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "MyInteraction.encode");
    return;
  }
}

typedef apache::thrift::ThriftPresult<false> MyService_MyInteractionFast_frobnicate_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, ::std::int32_t*>> MyService_MyInteractionFast_frobnicate_presult;
typedef apache::thrift::ThriftPresult<false> MyService_MyInteractionFast_ping_pargs;
typedef apache::thrift::ThriftPresult<false> MyService_MyInteractionFast_truthify_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, bool*>>
    > MyService_MyInteractionFast_truthify_presult;
typedef apache::thrift::ThriftPresult<false> MyService_MyInteractionFast_encode_pargs;
typedef apache::thrift::ThriftPResultSink<
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::set<::apache::thrift::type_class::floating_point>, ::std::set<float>*>>,
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::string, ::std::string*>>,
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::binary, ::std::string*>>
    > MyService_MyInteractionFast_encode_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_MyInteractionFast_frobnicate(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, nullptr, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_, "MyInteractionFast")) {
    return;
  }
  process_MyInteractionFast_frobnicate<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(serializedRequest), ctx, eb, tm);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_MyInteractionFast_frobnicate(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_MyInteractionFast_frobnicate_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.MyInteractionFast.frobnicate", ctx));
  auto tile = ctx->getTile();
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "MyInteractionFast.frobnicate");
    return;
  }
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb, tile);
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<::std::int32_t>>(std::move(req), std::move(ctxStack), return_MyInteractionFast_frobnicate<ProtocolIn_,ProtocolOut_>, throw_wrapped_MyInteractionFast_frobnicate<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx, nullptr, tile);
  static_cast<MyServiceSvIf::MyInteractionFastIf*>(tile)->async_eb_frobnicate(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue MyServiceAsyncProcessor::return_MyInteractionFast_frobnicate(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::int32_t const& _return) {
  ProtocolOut_ prot;
  MyService_MyInteractionFast_frobnicate_presult result;
  result.get<0>().value = const_cast<::std::int32_t*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("MyInteractionFast.frobnicate", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_MyInteractionFast_frobnicate(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "MyInteractionFast.frobnicate");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_MyInteractionFast_ping(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, nullptr, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, iface_, "MyInteractionFast")) {
    return;
  }
  process_MyInteractionFast_ping<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(serializedRequest), ctx, eb, tm);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_MyInteractionFast_ping(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_MyInteractionFast_ping_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.MyInteractionFast.ping", ctx));
  auto tile = ctx->getTile();
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    LOG(ERROR) << ex.what() << " in function ping";
    eb->runInEventBaseThread([req = std::move(req)] {});
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallbackBase>(std::move(req), std::move(ctxStack), nullptr, eb, tm, ctx, tile);
  static_cast<MyServiceSvIf::MyInteractionFastIf*>(tile)->async_eb_ping(std::move(callback));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_MyInteractionFast_truthify(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, nullptr, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, iface_, "MyInteractionFast")) {
    return;
  }
  process_MyInteractionFast_truthify<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(serializedRequest), ctx, eb, tm);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_MyInteractionFast_truthify(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_MyInteractionFast_truthify_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.MyInteractionFast.truthify", ctx));
  auto tile = ctx->getTile();
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "MyInteractionFast.truthify");
    return;
  }
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb, tile);
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<bool>>>(std::move(req), std::move(ctxStack), return_MyInteractionFast_truthify<ProtocolIn_,ProtocolOut_>, throw_wrapped_MyInteractionFast_truthify<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx, eb, tile);
  static_cast<MyServiceSvIf::MyInteractionFastIf*>(tile)->async_eb_truthify(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::ResponseAndServerStreamFactory MyServiceAsyncProcessor::return_MyInteractionFast_truthify(int32_t protoSeqId, apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, ::apache::thrift::ServerStream<bool>&& _return) {
  ProtocolOut_ prot;
  MyService_MyInteractionFast_truthify_presult::FieldsType result;
  using StreamPResultType = MyService_MyInteractionFast_truthify_presult::StreamPResultType;
  auto& returnStream = _return;

      using ExMapType = apache::thrift::detail::ap::EmptyExMapType;
  auto encodedStream = apache::thrift::detail::ap::encode_server_stream<ProtocolOut_, StreamPResultType, ExMapType>(std::move(returnStream), std::move(executor));
  return {serializeResponse("MyInteractionFast.truthify", &prot, protoSeqId, ctx, result), std::move(encodedStream)};
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_MyInteractionFast_truthify(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "MyInteractionFast.truthify");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_MyInteractionFast_encode(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, nullptr, apache::thrift::RpcKind::SINK, iface_, "MyInteractionFast")) {
    return;
  }
  process_MyInteractionFast_encode<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(serializedRequest), ctx, eb, tm);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_MyInteractionFast_encode(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_MyInteractionFast_encode_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.MyInteractionFast.encode", ctx));
  auto tile = ctx->getTile();
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "MyInteractionFast.encode");
    return;
  }
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb, tile);
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<::apache::thrift::ResponseAndSinkConsumer<::std::set<float>, ::std::string, ::std::string>>>(std::move(req), std::move(ctxStack), return_MyInteractionFast_encode<ProtocolIn_,ProtocolOut_>, throw_wrapped_MyInteractionFast_encode<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx, eb, tile);
  static_cast<MyServiceSvIf::MyInteractionFastIf*>(tile)->async_eb_encode(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
std::pair<folly::IOBufQueue, apache::thrift::detail::SinkConsumerImpl> MyServiceAsyncProcessor::return_MyInteractionFast_encode(apache::thrift::ContextStack* ctx, ::apache::thrift::ResponseAndSinkConsumer<::std::set<float>, ::std::string, ::std::string>&& _return, folly::Executor::KeepAlive<> executor) {
  ProtocolOut_ prot;
  MyService_MyInteractionFast_encode_presult::FieldsType result;
  using SinkPResultType = MyService_MyInteractionFast_encode_presult::SinkPResultType;
  using FinalResponsePResultType = MyService_MyInteractionFast_encode_presult::FinalResponsePResultType;
  result.get<0>().value = &_return.response;
  result.setIsSet(0, true);

  using ExMapType = apache::thrift::detail::ap::EmptyExMapType;

  auto sinkConsumerImpl = apache::thrift::detail::ap::toSinkConsumerImpl<
      ProtocolIn_,
      ProtocolOut_,
      SinkPResultType,
      FinalResponsePResultType,
      ExMapType>(
      std::move(_return.sinkConsumer),
      std::move(executor));

  return {serializeResponse("MyInteractionFast.encode", &prot, 0, ctx, result), std::move(sinkConsumerImpl)};
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_MyInteractionFast_encode(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "MyInteractionFast.encode");
    return;
  }
}

typedef apache::thrift::ThriftPresult<false> MyService_SerialInteraction_frobnicate_pargs;
typedef apache::thrift::ThriftPresult<true> MyService_SerialInteraction_frobnicate_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_SerialInteraction_frobnicate(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_, "SerialInteraction")) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &MyServiceAsyncProcessor::process_SerialInteraction_frobnicate<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_SerialInteraction_frobnicate(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_SerialInteraction_frobnicate_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.SerialInteraction.frobnicate", ctx));
  auto tile = ctx->getTile();
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "SerialInteraction.frobnicate");
    return;
  }
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb, tile);
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_SerialInteraction_frobnicate<ProtocolIn_,ProtocolOut_>, throw_wrapped_SerialInteraction_frobnicate<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx, tile);
  static_cast<MyServiceSvIf::SerialInteractionIf*>(tile)->async_tm_frobnicate(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue MyServiceAsyncProcessor::return_SerialInteraction_frobnicate(int32_t protoSeqId, apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  MyService_SerialInteraction_frobnicate_presult result;
  return serializeResponse("SerialInteraction.frobnicate", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_SerialInteraction_frobnicate(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "SerialInteraction.frobnicate");
    return;
  }
}

} // cpp2
