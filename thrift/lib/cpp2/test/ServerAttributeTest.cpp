/*
 * Copyright 2004-present Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/lib/cpp2/server/ServerAttribute.h>
#include <gtest/gtest.h>

using namespace apache::thrift;

TEST(ServerAttributeTest, baselineFirst) {
  ServerAttribute<int> a{0};
  EXPECT_EQ(a.get(), 0);

  a.set(1, AttributeSource::BASELINE);
  EXPECT_EQ(a.get(), 1);
  a.set(2, AttributeSource::OVERRIDE);
  EXPECT_EQ(a.get(), 2);

  a.unset(AttributeSource::OVERRIDE);
  EXPECT_EQ(a.get(), 1);
  a.unset(AttributeSource::BASELINE);
  EXPECT_EQ(a.get(), 0);
}

TEST(ServerAttributeTest, overrideFirst) {
  ServerAttribute<int> a{0};
  EXPECT_EQ(a.get(), 0);

  a.set(2, AttributeSource::OVERRIDE);
  EXPECT_EQ(a.get(), 2);
  a.set(1, AttributeSource::BASELINE);
  // still return overrided value
  EXPECT_EQ(a.get(), 2);

  a.unset(AttributeSource::BASELINE);
  // still return overrided value
  EXPECT_EQ(a.get(), 2);
  a.unset(AttributeSource::OVERRIDE);
  EXPECT_EQ(a.get(), 0);
}
