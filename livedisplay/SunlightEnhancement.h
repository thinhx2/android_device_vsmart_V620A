/*
 * Copyright (C) 2019 The LineageOS Project
 * Copyright (C) 2020 The MoKee Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef VENDOR_MOKEE_LIVEDISPLAY_V2_0_SUNLIGHTENHANCEMENT_H
#define VENDOR_MOKEE_LIVEDISPLAY_V2_0_SUNLIGHTENHANCEMENT_H

#include <vendor/mokee/livedisplay/2.0/ISunlightEnhancement.h>

namespace vendor {
namespace mokee {
namespace livedisplay {
namespace V2_0 {
namespace sysfs {

using ::android::hardware::Return;
using ::android::hardware::Void;

#define FILE_HBM "/sys/class/vsm/lcm/display/hbm"

class SunlightEnhancement : public ISunlightEnhancement {
  public:
    bool isSupported();

    // Methods from ::vendor::mokee::livedisplay::V2_0::ISunlightEnhancement follow.
    Return<bool> isEnabled() override;
    Return<bool> setEnabled(bool enabled) override;
};

}  // namespace sysfs
}  // namespace V2_0
}  // namespace livedisplay
}  // namespace mokee
}  // namespace vendor

#endif  // VENDOR_MOKEE_LIVEDISPLAY_V2_0_SUNLIGHTENHANCEMENT_H
