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
// source: google/cloud/talent/v4/completion_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_COMPLETION_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_COMPLETION_CLIENT_H

#include "google/cloud/talent/completion_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace talent {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// A service handles auto completion.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class CompletionClient {
 public:
  explicit CompletionClient(std::shared_ptr<CompletionConnection> connection,
                            Options options = {});
  ~CompletionClient();

  //@{
  // @name Copy and move support
  CompletionClient(CompletionClient const&) = default;
  CompletionClient& operator=(CompletionClient const&) = default;
  CompletionClient(CompletionClient&&) = default;
  CompletionClient& operator=(CompletionClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(CompletionClient const& a, CompletionClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(CompletionClient const& a, CompletionClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Completes the specified prefix with keyword suggestions.
  /// Intended for use by a job search auto-complete search box.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::CompleteQueryRequest,google/cloud/talent/v4/completion_service.proto#L48}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::CompleteQueryResponse,google/cloud/talent/v4/completion_service.proto#L134}
  ///
  /// [google.cloud.talent.v4.CompleteQueryRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/completion_service.proto#L48}
  /// [google.cloud.talent.v4.CompleteQueryResponse]:
  /// @googleapis_reference_link{google/cloud/talent/v4/completion_service.proto#L134}
  ///
  StatusOr<google::cloud::talent::v4::CompleteQueryResponse> CompleteQuery(
      google::cloud::talent::v4::CompleteQueryRequest const& request,
      Options options = {});

 private:
  std::shared_ptr<CompletionConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_COMPLETION_CLIENT_H
