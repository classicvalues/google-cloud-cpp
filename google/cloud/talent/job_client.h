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
// source: google/cloud/talent/v4/job_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_JOB_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_JOB_CLIENT_H

#include "google/cloud/talent/job_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace talent {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// A service handles job management, including job CRUD, enumeration and
/// search.
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
class JobServiceClient {
 public:
  explicit JobServiceClient(std::shared_ptr<JobServiceConnection> connection,
                            Options options = {});
  ~JobServiceClient();

  //@{
  // @name Copy and move support
  JobServiceClient(JobServiceClient const&) = default;
  JobServiceClient& operator=(JobServiceClient const&) = default;
  JobServiceClient(JobServiceClient&&) = default;
  JobServiceClient& operator=(JobServiceClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(JobServiceClient const& a, JobServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(JobServiceClient const& a, JobServiceClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Creates a new job.
  ///
  /// Typically, the job becomes searchable within 10 seconds, but it may take
  /// up to 5 minutes.
  ///
  /// @param parent  Required. The resource name of the tenant under which the
  /// job is created.
  ///  The format is "projects/{project_id}/tenants/{tenant_id}". For example,
  ///  "projects/foo/tenants/bar".
  /// @param job  Required. The Job to be created.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Job,google/cloud/talent/v4/job.proto#L34}
  ///
  /// [google.cloud.talent.v4.CreateJobRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L169}
  /// [google.cloud.talent.v4.Job]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  ///
  StatusOr<google::cloud::talent::v4::Job> CreateJob(
      std::string const& parent, google::cloud::talent::v4::Job const& job,
      Options options = {});

  ///
  /// Creates a new job.
  ///
  /// Typically, the job becomes searchable within 10 seconds, but it may take
  /// up to 5 minutes.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::CreateJobRequest,google/cloud/talent/v4/job_service.proto#L169}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Job,google/cloud/talent/v4/job.proto#L34}
  ///
  /// [google.cloud.talent.v4.CreateJobRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L169}
  /// [google.cloud.talent.v4.Job]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  ///
  StatusOr<google::cloud::talent::v4::Job> CreateJob(
      google::cloud::talent::v4::CreateJobRequest const& request,
      Options options = {});

  ///
  /// Begins executing a batch create jobs operation.
  ///
  /// @param parent  Required. The resource name of the tenant under which the
  /// job is created.
  ///  The format is "projects/{project_id}/tenants/{tenant_id}". For example,
  ///  "projects/foo/tenants/bar".
  /// @param jobs  Required. The jobs to be created.
  ///  A maximum of 200 jobs can be created in a batch.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::BatchCreateJobsResponse,google/cloud/talent/v4/job_service.proto#L919}
  ///
  /// [google.cloud.talent.v4.BatchCreateJobsRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L827}
  /// [google.cloud.talent.v4.BatchCreateJobsResponse]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L919}
  ///
  future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
  BatchCreateJobs(std::string const& parent,
                  std::vector<google::cloud::talent::v4::Job> const& jobs,
                  Options options = {});

  ///
  /// Begins executing a batch create jobs operation.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::BatchCreateJobsRequest,google/cloud/talent/v4/job_service.proto#L827}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::BatchCreateJobsResponse,google/cloud/talent/v4/job_service.proto#L919}
  ///
  /// [google.cloud.talent.v4.BatchCreateJobsRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L827}
  /// [google.cloud.talent.v4.BatchCreateJobsResponse]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L919}
  ///
  future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
  BatchCreateJobs(
      google::cloud::talent::v4::BatchCreateJobsRequest const& request,
      Options options = {});

  ///
  /// Retrieves the specified job, whose status is OPEN or recently EXPIRED
  /// within the last 90 days.
  ///
  /// @param name  Required. The resource name of the job to retrieve.
  ///  The format is
  ///  "projects/{project_id}/tenants/{tenant_id}/jobs/{job_id}". For
  ///  example, "projects/foo/tenants/bar/jobs/baz".
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Job,google/cloud/talent/v4/job.proto#L34}
  ///
  /// [google.cloud.talent.v4.GetJobRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L186}
  /// [google.cloud.talent.v4.Job]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  ///
  StatusOr<google::cloud::talent::v4::Job> GetJob(std::string const& name,
                                                  Options options = {});

  ///
  /// Retrieves the specified job, whose status is OPEN or recently EXPIRED
  /// within the last 90 days.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::GetJobRequest,google/cloud/talent/v4/job_service.proto#L186}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Job,google/cloud/talent/v4/job.proto#L34}
  ///
  /// [google.cloud.talent.v4.GetJobRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L186}
  /// [google.cloud.talent.v4.Job]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  ///
  StatusOr<google::cloud::talent::v4::Job> GetJob(
      google::cloud::talent::v4::GetJobRequest const& request,
      Options options = {});

  ///
  /// Updates specified job.
  ///
  /// Typically, updated contents become visible in search results within 10
  /// seconds, but it may take up to 5 minutes.
  ///
  /// @param job  Required. The Job to be updated.
  /// @param update_mask  Strongly recommended for the best service experience.
  ///  If [update_mask][google.cloud.talent.v4.UpdateJobRequest.update_mask] is
  ///  provided, only the specified fields in
  ///  [job][google.cloud.talent.v4.UpdateJobRequest.job] are updated. Otherwise
  ///  all the fields are updated. A field mask to restrict the fields that are
  ///  updated. Only top level fields of [Job][google.cloud.talent.v4.Job] are
  ///  supported.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Job,google/cloud/talent/v4/job.proto#L34}
  ///
  /// [google.cloud.talent.v4.UpdateJobRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L201}
  /// [google.cloud.talent.v4.Job]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  ///
  StatusOr<google::cloud::talent::v4::Job> UpdateJob(
      google::cloud::talent::v4::Job const& job,
      google::protobuf::FieldMask const& update_mask, Options options = {});

  ///
  /// Updates specified job.
  ///
  /// Typically, updated contents become visible in search results within 10
  /// seconds, but it may take up to 5 minutes.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::UpdateJobRequest,google/cloud/talent/v4/job_service.proto#L201}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Job,google/cloud/talent/v4/job.proto#L34}
  ///
  /// [google.cloud.talent.v4.UpdateJobRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L201}
  /// [google.cloud.talent.v4.Job]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  ///
  StatusOr<google::cloud::talent::v4::Job> UpdateJob(
      google::cloud::talent::v4::UpdateJobRequest const& request,
      Options options = {});

  ///
  /// Begins executing a batch update jobs operation.
  ///
  /// @param parent  Required. The resource name of the tenant under which the
  /// job is created.
  ///  The format is "projects/{project_id}/tenants/{tenant_id}". For example,
  ///  "projects/foo/tenants/bar".
  /// @param jobs  Required. The jobs to be updated.
  ///  A maximum of 200 jobs can be updated in a batch.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::BatchUpdateJobsResponse,google/cloud/talent/v4/job_service.proto#L927}
  ///
  /// [google.cloud.talent.v4.BatchUpdateJobsRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L845}
  /// [google.cloud.talent.v4.BatchUpdateJobsResponse]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L927}
  ///
  future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
  BatchUpdateJobs(std::string const& parent,
                  std::vector<google::cloud::talent::v4::Job> const& jobs,
                  Options options = {});

  ///
  /// Begins executing a batch update jobs operation.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::BatchUpdateJobsRequest,google/cloud/talent/v4/job_service.proto#L845}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::BatchUpdateJobsResponse,google/cloud/talent/v4/job_service.proto#L927}
  ///
  /// [google.cloud.talent.v4.BatchUpdateJobsRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L845}
  /// [google.cloud.talent.v4.BatchUpdateJobsResponse]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L927}
  ///
  future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
  BatchUpdateJobs(
      google::cloud::talent::v4::BatchUpdateJobsRequest const& request,
      Options options = {});

  ///
  /// Deletes the specified job.
  ///
  /// Typically, the job becomes unsearchable within 10 seconds, but it may take
  /// up to 5 minutes.
  ///
  /// @param name  Required. The resource name of the job to be deleted.
  ///  The format is
  ///  "projects/{project_id}/tenants/{tenant_id}/jobs/{job_id}". For
  ///  example, "projects/foo/tenants/bar/jobs/baz".
  /// @param options  Optional. Operation options.
  ///
  /// [google.cloud.talent.v4.DeleteJobRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L216}
  ///
  Status DeleteJob(std::string const& name, Options options = {});

  ///
  /// Deletes the specified job.
  ///
  /// Typically, the job becomes unsearchable within 10 seconds, but it may take
  /// up to 5 minutes.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::DeleteJobRequest,google/cloud/talent/v4/job_service.proto#L216}
  /// @param options  Optional. Operation options.
  ///
  /// [google.cloud.talent.v4.DeleteJobRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L216}
  ///
  Status DeleteJob(google::cloud::talent::v4::DeleteJobRequest const& request,
                   Options options = {});

  ///
  /// Begins executing a batch delete jobs operation.
  ///
  /// @param parent  Required. The resource name of the tenant under which the
  /// job is created.
  ///  The format is "projects/{project_id}/tenants/{tenant_id}". For example,
  ///  "projects/foo/tenants/bar".
  ///  The parent of all of the jobs specified in `names` must match this field.
  /// @param names  The names of the jobs to delete.
  ///  The format is "projects/{project_id}/tenants/{tenant_id}/jobs/{job_id}".
  ///  For example, "projects/foo/tenants/bar/jobs/baz".
  ///  A maximum of 200 jobs can be deleted in a batch.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::BatchDeleteJobsResponse,google/cloud/talent/v4/job_service.proto#L935}
  ///
  /// [google.cloud.talent.v4.BatchDeleteJobsRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L879}
  /// [google.cloud.talent.v4.BatchDeleteJobsResponse]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L935}
  ///
  future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
  BatchDeleteJobs(std::string const& parent,
                  std::vector<std::string> const& names, Options options = {});

  ///
  /// Begins executing a batch delete jobs operation.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::BatchDeleteJobsRequest,google/cloud/talent/v4/job_service.proto#L879}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::BatchDeleteJobsResponse,google/cloud/talent/v4/job_service.proto#L935}
  ///
  /// [google.cloud.talent.v4.BatchDeleteJobsRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L879}
  /// [google.cloud.talent.v4.BatchDeleteJobsResponse]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L935}
  ///
  future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
  BatchDeleteJobs(
      google::cloud::talent::v4::BatchDeleteJobsRequest const& request,
      Options options = {});

  ///
  /// Lists jobs by filter.
  ///
  /// @param parent  Required. The resource name of the tenant under which the
  /// job is created.
  ///  The format is "projects/{project_id}/tenants/{tenant_id}". For example,
  ///  "projects/foo/tenants/bar".
  /// @param filter  Required. The filter string specifies the jobs to be
  /// enumerated.
  ///  Supported operator: =, AND
  ///  The fields eligible for filtering are:
  ///  * `companyName`
  ///  * `requisitionId`
  ///  * `status` Available values: OPEN, EXPIRED, ALL. Defaults to
  ///  OPEN if no value is specified.
  ///  At least one of `companyName` and `requisitionId` must present or an
  ///  INVALID_ARGUMENT error is thrown.
  ///  Sample Query:
  ///  * companyName = "projects/foo/tenants/bar/companies/baz"
  ///  * companyName = "projects/foo/tenants/bar/companies/baz" AND
  ///  requisitionId = "req-1"
  ///  * companyName = "projects/foo/tenants/bar/companies/baz" AND
  ///  status = "EXPIRED"
  ///  * requisitionId = "req-1"
  ///  * requisitionId = "req-1" AND status = "EXPIRED"
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Job,google/cloud/talent/v4/job.proto#L34}
  ///
  /// [google.cloud.talent.v4.ListJobsRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L231}
  /// [google.cloud.talent.v4.Job]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  ///
  StreamRange<google::cloud::talent::v4::Job> ListJobs(
      std::string const& parent, std::string const& filter,
      Options options = {});

  ///
  /// Lists jobs by filter.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::ListJobsRequest,google/cloud/talent/v4/job_service.proto#L231}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::Job,google/cloud/talent/v4/job.proto#L34}
  ///
  /// [google.cloud.talent.v4.ListJobsRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L231}
  /// [google.cloud.talent.v4.Job]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  ///
  StreamRange<google::cloud::talent::v4::Job> ListJobs(
      google::cloud::talent::v4::ListJobsRequest request, Options options = {});

  ///
  /// Searches for jobs using the provided
  /// [SearchJobsRequest][google.cloud.talent.v4.SearchJobsRequest].
  ///
  /// This call constrains the
  /// [visibility][google.cloud.talent.v4.Job.visibility] of jobs present in the
  /// database, and only returns jobs that the caller has permission to search
  /// against.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::SearchJobsRequest,google/cloud/talent/v4/job_service.proto#L328}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::SearchJobsResponse,google/cloud/talent/v4/job_service.proto#L750}
  ///
  /// [google.cloud.talent.v4.SearchJobsRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L328}
  /// [google.cloud.talent.v4.SearchJobsResponse]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L750}
  ///
  StatusOr<google::cloud::talent::v4::SearchJobsResponse> SearchJobs(
      google::cloud::talent::v4::SearchJobsRequest const& request,
      Options options = {});

  ///
  /// Searches for jobs using the provided
  /// [SearchJobsRequest][google.cloud.talent.v4.SearchJobsRequest].
  ///
  /// This API call is intended for the use case of targeting passive job
  /// seekers (for example, job seekers who have signed up to receive email
  /// alerts about potential job opportunities), it has different algorithmic
  /// adjustments that are designed to specifically target passive job seekers.
  ///
  /// This call constrains the
  /// [visibility][google.cloud.talent.v4.Job.visibility] of jobs present in the
  /// database, and only returns jobs the caller has permission to search
  /// against.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::talent::v4::SearchJobsRequest,google/cloud/talent/v4/job_service.proto#L328}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::talent::v4::SearchJobsResponse,google/cloud/talent/v4/job_service.proto#L750}
  ///
  /// [google.cloud.talent.v4.SearchJobsRequest]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L328}
  /// [google.cloud.talent.v4.SearchJobsResponse]:
  /// @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L750}
  ///
  StatusOr<google::cloud::talent::v4::SearchJobsResponse> SearchJobsForAlert(
      google::cloud::talent::v4::SearchJobsRequest const& request,
      Options options = {});

 private:
  std::shared_ptr<JobServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_JOB_CLIENT_H
