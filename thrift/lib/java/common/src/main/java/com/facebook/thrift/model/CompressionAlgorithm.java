/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
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

package com.facebook.thrift.model;

import com.facebook.swift.codec.ThriftEnumValue;

public enum CompressionAlgorithm {
  NONE(0),
  ZLIB(1),
  ZSTD(2);

  private final int value;

  private CompressionAlgorithm(int value) {
    this.value = value;
  }

  @ThriftEnumValue
  public int getValue() {
    return this.value;
  }

  public static CompressionAlgorithm fromInteger(int n) {
    switch (n) {
      case 0:
        return NONE;
      case 1:
        return ZLIB;
      case 2:
        return ZSTD;
      default:
        return null;
    }
  }
}
