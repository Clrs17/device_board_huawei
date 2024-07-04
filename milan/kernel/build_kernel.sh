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

PROJECT_ROOT=$(cd $(dirname $0);cd ../../../../../; pwd)
PRODUCT_PATH=vendor/huawei/milan
KERNEL_ARCH=arm64
KERNEL_VERSION=linux-milan
KERNEL_IMAGE=Image.gz
DEFCONFIG_FILE=milan_oh_defconfig
OUT_PKG_DIR=${PROJECT_ROOT}/out/milan/packages/phone/images

OUT_DIR=${PROJECT_ROOT}/out
KERNEL_SRC_TMP_PATH=${OUT_DIR}/kernel/src_tmp/${KERNEL_VERSION}

rm -rf ${KERNEL_SRC_TMP_PATH}

bash check_patch.sh ${PROJECT_ROOT} ${KERNEL_VERSION}
bash make_kernel.sh ${PROJECT_ROOT} ${PRODUCT_PATH} ${KERNEL_ARCH} ${KERNEL_VERSION} ${KERNEL_IMAGE} ${DEFCONFIG_FILE} ${OUT_PKG_DIR}