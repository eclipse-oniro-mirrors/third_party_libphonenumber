/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef I18N_PHONENUMBERS_UPDATE_LIBPHONENUMBER_H_
#define I18N_PHONENUMBERS_UPDATE_LIBPHONENUMBER_H_

namespace i18n {
namespace phonenumbers {
class UpdateLibphonenumber {
public:
    static void LoadUpdateData();

private:
    static const std::string METADATAINFO_PATH;
};
}  // namespace phonenumbers
}  // namespace i18n
#endif  // I18N_PHONENUMBERS_UPDATE_METADATA_H_
