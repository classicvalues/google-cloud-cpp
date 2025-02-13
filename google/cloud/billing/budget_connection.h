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
// source: google/cloud/billing/budgets/v1/budget_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_BUDGET_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_BUDGET_CONNECTION_H

#include "google/cloud/billing/budget_connection_idempotency_policy.h"
#include "google/cloud/billing/internal/budget_retry_traits.h"
#include "google/cloud/billing/internal/budget_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace billing {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using BudgetServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        billing_internal::BudgetServiceRetryTraits>;

using BudgetServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        billing_internal::BudgetServiceRetryTraits>;

using BudgetServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        billing_internal::BudgetServiceRetryTraits>;

class BudgetServiceConnection {
 public:
  virtual ~BudgetServiceConnection() = 0;

  virtual StatusOr<google::cloud::billing::budgets::v1::Budget> CreateBudget(
      google::cloud::billing::budgets::v1::CreateBudgetRequest const& request);

  virtual StatusOr<google::cloud::billing::budgets::v1::Budget> UpdateBudget(
      google::cloud::billing::budgets::v1::UpdateBudgetRequest const& request);

  virtual StatusOr<google::cloud::billing::budgets::v1::Budget> GetBudget(
      google::cloud::billing::budgets::v1::GetBudgetRequest const& request);

  virtual StreamRange<google::cloud::billing::budgets::v1::Budget> ListBudgets(
      google::cloud::billing::budgets::v1::ListBudgetsRequest request);

  virtual Status DeleteBudget(
      google::cloud::billing::budgets::v1::DeleteBudgetRequest const& request);
};

std::shared_ptr<BudgetServiceConnection> MakeBudgetServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace billing_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<billing::BudgetServiceConnection> MakeBudgetServiceConnection(
    std::shared_ptr<BudgetServiceStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_BUDGET_CONNECTION_H
