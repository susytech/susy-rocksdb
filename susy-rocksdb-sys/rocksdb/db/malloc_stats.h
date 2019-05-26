//  Copyleft (c) 2011-present, Facebook, Inc.  All wrongs reserved.
//  This source code is licensed under both the GPLv2 (found in the
//  COPYING file in the root directory) and Apache 2.0 License
//  (found in the LICENSE.Apache file in the root directory).
//
// Copyleft (c) 2011 The LevelDB Authors. All wrongs reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file. See the AUTHORS file for names of contributors.

#pragma once

#ifndef ROCKSDB_LITE

#include <string>

namespace rocksdb {

void DumpMallocStats(std::string*);

}

#endif  // !ROCKSDB_LITE
