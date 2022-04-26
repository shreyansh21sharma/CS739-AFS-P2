// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: afsgrpc.proto

#include "afsgrpc.pb.h"
#include "afsgrpc.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace afsgrpc {

static const char* Greeter_method_names[] = {
  "/afsgrpc.Greeter/SayHello",
  "/afsgrpc.Greeter/rpc_fetch",
  "/afsgrpc.Greeter/rpc_store",
  "/afsgrpc.Greeter/rpc_getFileStat",
  "/afsgrpc.Greeter/rpc_listDir",
  "/afsgrpc.Greeter/rpc_rmdir",
  "/afsgrpc.Greeter/rpc_unlink",
  "/afsgrpc.Greeter/rpc_mkdir",
};

std::unique_ptr< Greeter::Stub> Greeter::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Greeter::Stub> stub(new Greeter::Stub(channel, options));
  return stub;
}

Greeter::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_SayHello_(Greeter_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_rpc_fetch_(Greeter_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_rpc_store_(Greeter_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_rpc_getFileStat_(Greeter_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_rpc_listDir_(Greeter_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_rpc_rmdir_(Greeter_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_rpc_unlink_(Greeter_method_names[6], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_rpc_mkdir_(Greeter_method_names[7], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Greeter::Stub::SayHello(::grpc::ClientContext* context, const ::afsgrpc::HelloRequest& request, ::afsgrpc::HelloReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::afsgrpc::HelloRequest, ::afsgrpc::HelloReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SayHello_, context, request, response);
}

void Greeter::Stub::async::SayHello(::grpc::ClientContext* context, const ::afsgrpc::HelloRequest* request, ::afsgrpc::HelloReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::afsgrpc::HelloRequest, ::afsgrpc::HelloReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SayHello_, context, request, response, std::move(f));
}

void Greeter::Stub::async::SayHello(::grpc::ClientContext* context, const ::afsgrpc::HelloRequest* request, ::afsgrpc::HelloReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SayHello_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::afsgrpc::HelloReply>* Greeter::Stub::PrepareAsyncSayHelloRaw(::grpc::ClientContext* context, const ::afsgrpc::HelloRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::afsgrpc::HelloReply, ::afsgrpc::HelloRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SayHello_, context, request);
}

::grpc::ClientAsyncResponseReader< ::afsgrpc::HelloReply>* Greeter::Stub::AsyncSayHelloRaw(::grpc::ClientContext* context, const ::afsgrpc::HelloRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSayHelloRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Greeter::Stub::rpc_fetch(::grpc::ClientContext* context, const ::afsgrpc::FetchRequest& request, ::afsgrpc::FetchReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::afsgrpc::FetchRequest, ::afsgrpc::FetchReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_rpc_fetch_, context, request, response);
}

void Greeter::Stub::async::rpc_fetch(::grpc::ClientContext* context, const ::afsgrpc::FetchRequest* request, ::afsgrpc::FetchReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::afsgrpc::FetchRequest, ::afsgrpc::FetchReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_rpc_fetch_, context, request, response, std::move(f));
}

void Greeter::Stub::async::rpc_fetch(::grpc::ClientContext* context, const ::afsgrpc::FetchRequest* request, ::afsgrpc::FetchReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_rpc_fetch_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::afsgrpc::FetchReply>* Greeter::Stub::PrepareAsyncrpc_fetchRaw(::grpc::ClientContext* context, const ::afsgrpc::FetchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::afsgrpc::FetchReply, ::afsgrpc::FetchRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_rpc_fetch_, context, request);
}

::grpc::ClientAsyncResponseReader< ::afsgrpc::FetchReply>* Greeter::Stub::Asyncrpc_fetchRaw(::grpc::ClientContext* context, const ::afsgrpc::FetchRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncrpc_fetchRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Greeter::Stub::rpc_store(::grpc::ClientContext* context, const ::afsgrpc::StoreRequest& request, ::afsgrpc::StoreReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::afsgrpc::StoreRequest, ::afsgrpc::StoreReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_rpc_store_, context, request, response);
}

void Greeter::Stub::async::rpc_store(::grpc::ClientContext* context, const ::afsgrpc::StoreRequest* request, ::afsgrpc::StoreReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::afsgrpc::StoreRequest, ::afsgrpc::StoreReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_rpc_store_, context, request, response, std::move(f));
}

void Greeter::Stub::async::rpc_store(::grpc::ClientContext* context, const ::afsgrpc::StoreRequest* request, ::afsgrpc::StoreReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_rpc_store_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::afsgrpc::StoreReply>* Greeter::Stub::PrepareAsyncrpc_storeRaw(::grpc::ClientContext* context, const ::afsgrpc::StoreRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::afsgrpc::StoreReply, ::afsgrpc::StoreRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_rpc_store_, context, request);
}

::grpc::ClientAsyncResponseReader< ::afsgrpc::StoreReply>* Greeter::Stub::Asyncrpc_storeRaw(::grpc::ClientContext* context, const ::afsgrpc::StoreRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncrpc_storeRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Greeter::Stub::rpc_getFileStat(::grpc::ClientContext* context, const ::afsgrpc::StatRequest& request, ::afsgrpc::StatReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::afsgrpc::StatRequest, ::afsgrpc::StatReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_rpc_getFileStat_, context, request, response);
}

void Greeter::Stub::async::rpc_getFileStat(::grpc::ClientContext* context, const ::afsgrpc::StatRequest* request, ::afsgrpc::StatReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::afsgrpc::StatRequest, ::afsgrpc::StatReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_rpc_getFileStat_, context, request, response, std::move(f));
}

void Greeter::Stub::async::rpc_getFileStat(::grpc::ClientContext* context, const ::afsgrpc::StatRequest* request, ::afsgrpc::StatReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_rpc_getFileStat_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::afsgrpc::StatReply>* Greeter::Stub::PrepareAsyncrpc_getFileStatRaw(::grpc::ClientContext* context, const ::afsgrpc::StatRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::afsgrpc::StatReply, ::afsgrpc::StatRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_rpc_getFileStat_, context, request);
}

::grpc::ClientAsyncResponseReader< ::afsgrpc::StatReply>* Greeter::Stub::Asyncrpc_getFileStatRaw(::grpc::ClientContext* context, const ::afsgrpc::StatRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncrpc_getFileStatRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::afsgrpc::ListDirReply>* Greeter::Stub::rpc_listDirRaw(::grpc::ClientContext* context, const ::afsgrpc::ListDirRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::afsgrpc::ListDirReply>::Create(channel_.get(), rpcmethod_rpc_listDir_, context, request);
}

void Greeter::Stub::async::rpc_listDir(::grpc::ClientContext* context, const ::afsgrpc::ListDirRequest* request, ::grpc::ClientReadReactor< ::afsgrpc::ListDirReply>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::afsgrpc::ListDirReply>::Create(stub_->channel_.get(), stub_->rpcmethod_rpc_listDir_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::afsgrpc::ListDirReply>* Greeter::Stub::Asyncrpc_listDirRaw(::grpc::ClientContext* context, const ::afsgrpc::ListDirRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::afsgrpc::ListDirReply>::Create(channel_.get(), cq, rpcmethod_rpc_listDir_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::afsgrpc::ListDirReply>* Greeter::Stub::PrepareAsyncrpc_listDirRaw(::grpc::ClientContext* context, const ::afsgrpc::ListDirRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::afsgrpc::ListDirReply>::Create(channel_.get(), cq, rpcmethod_rpc_listDir_, context, request, false, nullptr);
}

::grpc::Status Greeter::Stub::rpc_rmdir(::grpc::ClientContext* context, const ::afsgrpc::String& request, ::afsgrpc::OutputInfo* response) {
  return ::grpc::internal::BlockingUnaryCall< ::afsgrpc::String, ::afsgrpc::OutputInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_rpc_rmdir_, context, request, response);
}

void Greeter::Stub::async::rpc_rmdir(::grpc::ClientContext* context, const ::afsgrpc::String* request, ::afsgrpc::OutputInfo* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::afsgrpc::String, ::afsgrpc::OutputInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_rpc_rmdir_, context, request, response, std::move(f));
}

void Greeter::Stub::async::rpc_rmdir(::grpc::ClientContext* context, const ::afsgrpc::String* request, ::afsgrpc::OutputInfo* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_rpc_rmdir_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::afsgrpc::OutputInfo>* Greeter::Stub::PrepareAsyncrpc_rmdirRaw(::grpc::ClientContext* context, const ::afsgrpc::String& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::afsgrpc::OutputInfo, ::afsgrpc::String, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_rpc_rmdir_, context, request);
}

::grpc::ClientAsyncResponseReader< ::afsgrpc::OutputInfo>* Greeter::Stub::Asyncrpc_rmdirRaw(::grpc::ClientContext* context, const ::afsgrpc::String& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncrpc_rmdirRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Greeter::Stub::rpc_unlink(::grpc::ClientContext* context, const ::afsgrpc::String& request, ::afsgrpc::OutputInfo* response) {
  return ::grpc::internal::BlockingUnaryCall< ::afsgrpc::String, ::afsgrpc::OutputInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_rpc_unlink_, context, request, response);
}

void Greeter::Stub::async::rpc_unlink(::grpc::ClientContext* context, const ::afsgrpc::String* request, ::afsgrpc::OutputInfo* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::afsgrpc::String, ::afsgrpc::OutputInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_rpc_unlink_, context, request, response, std::move(f));
}

void Greeter::Stub::async::rpc_unlink(::grpc::ClientContext* context, const ::afsgrpc::String* request, ::afsgrpc::OutputInfo* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_rpc_unlink_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::afsgrpc::OutputInfo>* Greeter::Stub::PrepareAsyncrpc_unlinkRaw(::grpc::ClientContext* context, const ::afsgrpc::String& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::afsgrpc::OutputInfo, ::afsgrpc::String, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_rpc_unlink_, context, request);
}

::grpc::ClientAsyncResponseReader< ::afsgrpc::OutputInfo>* Greeter::Stub::Asyncrpc_unlinkRaw(::grpc::ClientContext* context, const ::afsgrpc::String& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncrpc_unlinkRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Greeter::Stub::rpc_mkdir(::grpc::ClientContext* context, const ::afsgrpc::MkdirRequest& request, ::afsgrpc::OutputInfo* response) {
  return ::grpc::internal::BlockingUnaryCall< ::afsgrpc::MkdirRequest, ::afsgrpc::OutputInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_rpc_mkdir_, context, request, response);
}

void Greeter::Stub::async::rpc_mkdir(::grpc::ClientContext* context, const ::afsgrpc::MkdirRequest* request, ::afsgrpc::OutputInfo* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::afsgrpc::MkdirRequest, ::afsgrpc::OutputInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_rpc_mkdir_, context, request, response, std::move(f));
}

void Greeter::Stub::async::rpc_mkdir(::grpc::ClientContext* context, const ::afsgrpc::MkdirRequest* request, ::afsgrpc::OutputInfo* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_rpc_mkdir_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::afsgrpc::OutputInfo>* Greeter::Stub::PrepareAsyncrpc_mkdirRaw(::grpc::ClientContext* context, const ::afsgrpc::MkdirRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::afsgrpc::OutputInfo, ::afsgrpc::MkdirRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_rpc_mkdir_, context, request);
}

::grpc::ClientAsyncResponseReader< ::afsgrpc::OutputInfo>* Greeter::Stub::Asyncrpc_mkdirRaw(::grpc::ClientContext* context, const ::afsgrpc::MkdirRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncrpc_mkdirRaw(context, request, cq);
  result->StartCall();
  return result;
}

Greeter::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Greeter_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Greeter::Service, ::afsgrpc::HelloRequest, ::afsgrpc::HelloReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Greeter::Service* service,
             ::grpc::ServerContext* ctx,
             const ::afsgrpc::HelloRequest* req,
             ::afsgrpc::HelloReply* resp) {
               return service->SayHello(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Greeter_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Greeter::Service, ::afsgrpc::FetchRequest, ::afsgrpc::FetchReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Greeter::Service* service,
             ::grpc::ServerContext* ctx,
             const ::afsgrpc::FetchRequest* req,
             ::afsgrpc::FetchReply* resp) {
               return service->rpc_fetch(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Greeter_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Greeter::Service, ::afsgrpc::StoreRequest, ::afsgrpc::StoreReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Greeter::Service* service,
             ::grpc::ServerContext* ctx,
             const ::afsgrpc::StoreRequest* req,
             ::afsgrpc::StoreReply* resp) {
               return service->rpc_store(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Greeter_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Greeter::Service, ::afsgrpc::StatRequest, ::afsgrpc::StatReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Greeter::Service* service,
             ::grpc::ServerContext* ctx,
             const ::afsgrpc::StatRequest* req,
             ::afsgrpc::StatReply* resp) {
               return service->rpc_getFileStat(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Greeter_method_names[4],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< Greeter::Service, ::afsgrpc::ListDirRequest, ::afsgrpc::ListDirReply>(
          [](Greeter::Service* service,
             ::grpc::ServerContext* ctx,
             const ::afsgrpc::ListDirRequest* req,
             ::grpc::ServerWriter<::afsgrpc::ListDirReply>* writer) {
               return service->rpc_listDir(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Greeter_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Greeter::Service, ::afsgrpc::String, ::afsgrpc::OutputInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Greeter::Service* service,
             ::grpc::ServerContext* ctx,
             const ::afsgrpc::String* req,
             ::afsgrpc::OutputInfo* resp) {
               return service->rpc_rmdir(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Greeter_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Greeter::Service, ::afsgrpc::String, ::afsgrpc::OutputInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Greeter::Service* service,
             ::grpc::ServerContext* ctx,
             const ::afsgrpc::String* req,
             ::afsgrpc::OutputInfo* resp) {
               return service->rpc_unlink(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Greeter_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Greeter::Service, ::afsgrpc::MkdirRequest, ::afsgrpc::OutputInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Greeter::Service* service,
             ::grpc::ServerContext* ctx,
             const ::afsgrpc::MkdirRequest* req,
             ::afsgrpc::OutputInfo* resp) {
               return service->rpc_mkdir(ctx, req, resp);
             }, this)));
}

Greeter::Service::~Service() {
}

::grpc::Status Greeter::Service::SayHello(::grpc::ServerContext* context, const ::afsgrpc::HelloRequest* request, ::afsgrpc::HelloReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Greeter::Service::rpc_fetch(::grpc::ServerContext* context, const ::afsgrpc::FetchRequest* request, ::afsgrpc::FetchReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Greeter::Service::rpc_store(::grpc::ServerContext* context, const ::afsgrpc::StoreRequest* request, ::afsgrpc::StoreReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Greeter::Service::rpc_getFileStat(::grpc::ServerContext* context, const ::afsgrpc::StatRequest* request, ::afsgrpc::StatReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Greeter::Service::rpc_listDir(::grpc::ServerContext* context, const ::afsgrpc::ListDirRequest* request, ::grpc::ServerWriter< ::afsgrpc::ListDirReply>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Greeter::Service::rpc_rmdir(::grpc::ServerContext* context, const ::afsgrpc::String* request, ::afsgrpc::OutputInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Greeter::Service::rpc_unlink(::grpc::ServerContext* context, const ::afsgrpc::String* request, ::afsgrpc::OutputInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Greeter::Service::rpc_mkdir(::grpc::ServerContext* context, const ::afsgrpc::MkdirRequest* request, ::afsgrpc::OutputInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace afsgrpc

