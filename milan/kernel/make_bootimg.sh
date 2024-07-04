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

set -e

export PROJECT_ROOT=$1
export PRODUCT_PATH=$2
export KERNEL_ARCH=$3
export KERNEL_VERSION=$4
export KERNEL_IMAGE=$5
export DEFCONFIG_FILE=$6
export OUT_PKG_DIR=$7
export KERNEL_OBJ_TMP_PATH=${PROJECT_ROOT}/out/kernel/OBJ/${KERNEL_VERSION}
export KERNEL_IMAGE_FILE=${KERNEL_OBJ_TMP_PATH}/arch/${KERNEL_ARCH}/boot/${KERNEL_IMAGE}
DTB=${KERNEL_OBJ_TMP_PATH}/arch/${KERNEL_ARCH}/boot/dts/qcom/msm8953-huawei-milan.dtb
BOOTCFG=${PROJECT_ROOT}/device/board/huawei/milan/kernel/bootimgcfg/bootimg.cfg

#生成bootimg
cat ${KERNEL_IMAGE_FILE} ${DTB} > "${OUT_PKG_DIR}/Image.gz-dtb"
abootimg --create "${OUT_PKG_DIR}/boot.img" -f ${BOOTCFG} -k "${OUT_PKG_DIR}/Image.gz-dtb" -r "${OUT_PKG_DIR}/ramdisk.img"
echo "boot.img build success"
