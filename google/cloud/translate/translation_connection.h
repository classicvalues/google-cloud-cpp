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
// source: google/cloud/translate/v3/translation_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_TRANSLATION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_TRANSLATION_CONNECTION_H

#include "google/cloud/translate/internal/translation_retry_traits.h"
#include "google/cloud/translate/internal/translation_stub.h"
#include "google/cloud/translate/translation_connection_idempotency_policy.h"
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
namespace translate {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using TranslationServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        translate_internal::TranslationServiceRetryTraits>;

using TranslationServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        translate_internal::TranslationServiceRetryTraits>;

using TranslationServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        translate_internal::TranslationServiceRetryTraits>;

class TranslationServiceConnection {
 public:
  virtual ~TranslationServiceConnection() = 0;

  virtual StatusOr<google::cloud::translation::v3::TranslateTextResponse>
  TranslateText(
      google::cloud::translation::v3::TranslateTextRequest const& request);

  virtual StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
  DetectLanguage(
      google::cloud::translation::v3::DetectLanguageRequest const& request);

  virtual StatusOr<google::cloud::translation::v3::SupportedLanguages>
  GetSupportedLanguages(
      google::cloud::translation::v3::GetSupportedLanguagesRequest const&
          request);

  virtual StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
  TranslateDocument(
      google::cloud::translation::v3::TranslateDocumentRequest const& request);

  virtual future<
      StatusOr<google::cloud::translation::v3::BatchTranslateResponse>>
  BatchTranslateText(
      google::cloud::translation::v3::BatchTranslateTextRequest const& request);

  virtual future<
      StatusOr<google::cloud::translation::v3::BatchTranslateDocumentResponse>>
  BatchTranslateDocument(
      google::cloud::translation::v3::BatchTranslateDocumentRequest const&
          request);

  virtual future<StatusOr<google::cloud::translation::v3::Glossary>>
  CreateGlossary(
      google::cloud::translation::v3::CreateGlossaryRequest const& request);

  virtual StreamRange<google::cloud::translation::v3::Glossary> ListGlossaries(
      google::cloud::translation::v3::ListGlossariesRequest request);

  virtual StatusOr<google::cloud::translation::v3::Glossary> GetGlossary(
      google::cloud::translation::v3::GetGlossaryRequest const& request);

  virtual future<
      StatusOr<google::cloud::translation::v3::DeleteGlossaryResponse>>
  DeleteGlossary(
      google::cloud::translation::v3::DeleteGlossaryRequest const& request);
};

std::shared_ptr<TranslationServiceConnection> MakeTranslationServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace translate_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<translate::TranslationServiceConnection>
MakeTranslationServiceConnection(std::shared_ptr<TranslationServiceStub> stub,
                                 Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_TRANSLATION_CONNECTION_H
