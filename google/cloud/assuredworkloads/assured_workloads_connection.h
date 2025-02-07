// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_ASSURED_WORKLOADS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_ASSURED_WORKLOADS_CONNECTION_H

#include "google/cloud/assuredworkloads/assured_workloads_connection_idempotency_policy.h"
#include "google/cloud/assuredworkloads/internal/assured_workloads_retry_traits.h"
#include "google/cloud/assuredworkloads/internal/assured_workloads_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace assuredworkloads {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using AssuredWorkloadsServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        assuredworkloads_internal::AssuredWorkloadsServiceRetryTraits>;

using AssuredWorkloadsServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        assuredworkloads_internal::AssuredWorkloadsServiceRetryTraits>;

using AssuredWorkloadsServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        assuredworkloads_internal::AssuredWorkloadsServiceRetryTraits>;

class AssuredWorkloadsServiceConnection {
 public:
  virtual ~AssuredWorkloadsServiceConnection() = 0;

  virtual future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
  CreateWorkload(
      google::cloud::assuredworkloads::v1::CreateWorkloadRequest const&
          request);

  virtual StatusOr<google::cloud::assuredworkloads::v1::Workload>
  UpdateWorkload(
      google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const&
          request);

  virtual Status DeleteWorkload(
      google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const&
          request);

  virtual StatusOr<google::cloud::assuredworkloads::v1::Workload> GetWorkload(
      google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request);

  virtual StreamRange<google::cloud::assuredworkloads::v1::Workload>
  ListWorkloads(
      google::cloud::assuredworkloads::v1::ListWorkloadsRequest request);
};

std::shared_ptr<AssuredWorkloadsServiceConnection>
MakeAssuredWorkloadsServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace assuredworkloads_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<assuredworkloads::AssuredWorkloadsServiceConnection>
MakeAssuredWorkloadsServiceConnection(
    std::shared_ptr<AssuredWorkloadsServiceStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_ASSURED_WORKLOADS_CONNECTION_H
