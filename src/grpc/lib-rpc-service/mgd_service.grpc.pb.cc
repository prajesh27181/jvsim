// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: mgd_service.proto

#include "mgd_service.pb.h"
#include "mgd_service.grpc.pb.h"

#include <grpc++/channel.h>
#include <grpc++/impl/client_unary_call.h>
#include <grpc++/impl/rpc_service_method.h>
#include <grpc++/impl/service_type.h>
#include <grpc++/support/async_unary_call.h>
#include <grpc++/support/async_stream.h>
#include <grpc++/support/sync_stream.h>
namespace management {

static const char* ManagementRpcApi_method_names[] = {
  "/management.ManagementRpcApi/ExecuteOpCommand",
  "/management.ManagementRpcApi/GetEphemeralConfig",
  "/management.ManagementRpcApi/EditEphemeralConfig",
};

std::unique_ptr< ManagementRpcApi::Stub> ManagementRpcApi::NewStub(const std::shared_ptr< ::grpc::Channel>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< ManagementRpcApi::Stub> stub(new ManagementRpcApi::Stub(channel));
  return stub;
}

ManagementRpcApi::Stub::Stub(const std::shared_ptr< ::grpc::Channel>& channel)
  : channel_(channel), rpcmethod_ExecuteOpCommand_(ManagementRpcApi_method_names[0], ::grpc::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetEphemeralConfig_(ManagementRpcApi_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EditEphemeralConfig_(ManagementRpcApi_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::management::ExecuteOpCommandResponse>* ManagementRpcApi::Stub::ExecuteOpCommandRaw(::grpc::ClientContext* context, const ::management::ExecuteOpCommandRequest& request) {
  return new ::grpc::ClientReader< ::management::ExecuteOpCommandResponse>(channel_.get(), rpcmethod_ExecuteOpCommand_, context, request);
}

::grpc::ClientAsyncReader< ::management::ExecuteOpCommandResponse>* ManagementRpcApi::Stub::AsyncExecuteOpCommandRaw(::grpc::ClientContext* context, const ::management::ExecuteOpCommandRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return new ::grpc::ClientAsyncReader< ::management::ExecuteOpCommandResponse>(channel_.get(), cq, rpcmethod_ExecuteOpCommand_, context, request, tag);
}

::grpc::Status ManagementRpcApi::Stub::GetEphemeralConfig(::grpc::ClientContext* context, const ::management::GetEphemeralConfigRequest& request, ::management::GetEphemeralConfigResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetEphemeralConfig_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::management::GetEphemeralConfigResponse>* ManagementRpcApi::Stub::AsyncGetEphemeralConfigRaw(::grpc::ClientContext* context, const ::management::GetEphemeralConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::management::GetEphemeralConfigResponse>(channel_.get(), cq, rpcmethod_GetEphemeralConfig_, context, request);
}

::grpc::Status ManagementRpcApi::Stub::EditEphemeralConfig(::grpc::ClientContext* context, const ::management::EditEphemeralConfigRequest& request, ::management::EditEphemeralConfigResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_EditEphemeralConfig_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::management::EditEphemeralConfigResponse>* ManagementRpcApi::Stub::AsyncEditEphemeralConfigRaw(::grpc::ClientContext* context, const ::management::EditEphemeralConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::management::EditEphemeralConfigResponse>(channel_.get(), cq, rpcmethod_EditEphemeralConfig_, context, request);
}

ManagementRpcApi::AsyncService::AsyncService() : ::grpc::AsynchronousService(ManagementRpcApi_method_names, 3) {}

ManagementRpcApi::Service::~Service() {
  delete service_;
}

::grpc::Status ManagementRpcApi::Service::ExecuteOpCommand(::grpc::ServerContext* context, const ::management::ExecuteOpCommandRequest* request, ::grpc::ServerWriter< ::management::ExecuteOpCommandResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

void ManagementRpcApi::AsyncService::RequestExecuteOpCommand(::grpc::ServerContext* context, ::management::ExecuteOpCommandRequest* request, ::grpc::ServerAsyncWriter< ::management::ExecuteOpCommandResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
  AsynchronousService::RequestServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
}

::grpc::Status ManagementRpcApi::Service::GetEphemeralConfig(::grpc::ServerContext* context, const ::management::GetEphemeralConfigRequest* request, ::management::GetEphemeralConfigResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

void ManagementRpcApi::AsyncService::RequestGetEphemeralConfig(::grpc::ServerContext* context, ::management::GetEphemeralConfigRequest* request, ::grpc::ServerAsyncResponseWriter< ::management::GetEphemeralConfigResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
  AsynchronousService::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
}

::grpc::Status ManagementRpcApi::Service::EditEphemeralConfig(::grpc::ServerContext* context, const ::management::EditEphemeralConfigRequest* request, ::management::EditEphemeralConfigResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

void ManagementRpcApi::AsyncService::RequestEditEphemeralConfig(::grpc::ServerContext* context, ::management::EditEphemeralConfigRequest* request, ::grpc::ServerAsyncResponseWriter< ::management::EditEphemeralConfigResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
  AsynchronousService::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
}

::grpc::RpcService* ManagementRpcApi::Service::service() {
  if (service_ != nullptr) {
    return service_;
  }
  service_ = new ::grpc::RpcService();
  service_->AddMethod(new ::grpc::RpcServiceMethod(
      ManagementRpcApi_method_names[0],
      ::grpc::RpcMethod::SERVER_STREAMING,
      new ::grpc::ServerStreamingHandler< ManagementRpcApi::Service, ::management::ExecuteOpCommandRequest, ::management::ExecuteOpCommandResponse>(
          std::mem_fn(&ManagementRpcApi::Service::ExecuteOpCommand), this)));
  service_->AddMethod(new ::grpc::RpcServiceMethod(
      ManagementRpcApi_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ManagementRpcApi::Service, ::management::GetEphemeralConfigRequest, ::management::GetEphemeralConfigResponse>(
          std::mem_fn(&ManagementRpcApi::Service::GetEphemeralConfig), this)));
  service_->AddMethod(new ::grpc::RpcServiceMethod(
      ManagementRpcApi_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ManagementRpcApi::Service, ::management::EditEphemeralConfigRequest, ::management::EditEphemeralConfigResponse>(
          std::mem_fn(&ManagementRpcApi::Service::EditEphemeralConfig), this)));
  return service_;
}


}  // namespace management

