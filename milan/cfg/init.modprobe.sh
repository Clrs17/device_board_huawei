#!/bin/bash
# Copyright (c) 2024 Claris <2318678921@qq.com>
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

modprobe venus_enc
modprobe venus_dec
modprobe videobuf2_dma_contig
modprobe venus_core
modprobe v4l2_mem2mem
modprobe videobuf2_v4l2
modprobe videobuf2_common
modprobe videodev
modprobe qcom_pon
modprobe socinfo
modprobe rmtfs_mem
modprobe soc_msm8916_analog
modprobe qcom_fg
modprobe rtc_pm8xxx
modprobe qcom_spmi_vadc
modprobe mc
modprobe qcom_vadc_common
modprobe qcom_spmi_temp_alarm
modprobe reboot_mode
modprobe socinfo
modprobe gpu_sched
