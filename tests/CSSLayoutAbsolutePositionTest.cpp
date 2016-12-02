/**
 * Copyright (c) 2014-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

 // @Generated by gentest/gentest.rb from gentest/fixtures/CSSLayoutAbsolutePositionTest.html

#include <CSSLayout/CSSLayout.h>
#include <gtest/gtest.h>

TEST(CSSLayoutTest, absolute_layout_width_height_start_top) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetPositionType(root_child0, YGPositionTypeAbsolute);
  CSSNodeStyleSetPosition(root_child0, YGEdgeStart, 10);
  CSSNodeStyleSetPosition(root_child0, YGEdgeTop, 10);
  CSSNodeStyleSetWidth(root_child0, 10);
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionLTR);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionRTL);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(80, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, absolute_layout_width_height_end_bottom) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetPositionType(root_child0, YGPositionTypeAbsolute);
  CSSNodeStyleSetPosition(root_child0, YGEdgeEnd, 10);
  CSSNodeStyleSetPosition(root_child0, YGEdgeBottom, 10);
  CSSNodeStyleSetWidth(root_child0, 10);
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionLTR);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(80, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(80, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionRTL);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(80, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, absolute_layout_start_top_end_bottom) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetPositionType(root_child0, YGPositionTypeAbsolute);
  CSSNodeStyleSetPosition(root_child0, YGEdgeStart, 10);
  CSSNodeStyleSetPosition(root_child0, YGEdgeTop, 10);
  CSSNodeStyleSetPosition(root_child0, YGEdgeEnd, 10);
  CSSNodeStyleSetPosition(root_child0, YGEdgeBottom, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionLTR);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(80, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(80, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionRTL);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(80, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(80, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, absolute_layout_width_height_start_top_end_bottom) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetPositionType(root_child0, YGPositionTypeAbsolute);
  CSSNodeStyleSetPosition(root_child0, YGEdgeStart, 10);
  CSSNodeStyleSetPosition(root_child0, YGEdgeTop, 10);
  CSSNodeStyleSetPosition(root_child0, YGEdgeEnd, 10);
  CSSNodeStyleSetPosition(root_child0, YGEdgeBottom, 10);
  CSSNodeStyleSetWidth(root_child0, 10);
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionLTR);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionRTL);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(80, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, do_not_clamp_height_of_absolute_node_to_height_of_its_overflow_hidden_parent) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetFlexDirection(root, YGFlexDirectionRow);
  CSSNodeStyleSetOverflow(root, YGOverflowHidden);
  CSSNodeStyleSetWidth(root, 50);
  CSSNodeStyleSetHeight(root, 50);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetPositionType(root_child0, YGPositionTypeAbsolute);
  CSSNodeStyleSetPosition(root_child0, YGEdgeStart, 0);
  CSSNodeStyleSetPosition(root_child0, YGEdgeTop, 0);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child0_child0 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child0_child0, 100);
  CSSNodeStyleSetHeight(root_child0_child0, 100);
  CSSNodeInsertChild(root_child0, root_child0_child0, 0);
  CSSNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionLTR);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child0_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child0_child0));

  CSSNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionRTL);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(-50, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child0_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child0_child0));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, absolute_layout_within_border) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetMargin(root, YGEdgeLeft, 10);
  CSSNodeStyleSetMargin(root, YGEdgeTop, 10);
  CSSNodeStyleSetMargin(root, YGEdgeRight, 10);
  CSSNodeStyleSetMargin(root, YGEdgeBottom, 10);
  CSSNodeStyleSetPadding(root, YGEdgeLeft, 10);
  CSSNodeStyleSetPadding(root, YGEdgeTop, 10);
  CSSNodeStyleSetPadding(root, YGEdgeRight, 10);
  CSSNodeStyleSetPadding(root, YGEdgeBottom, 10);
  CSSNodeStyleSetBorder(root, YGEdgeLeft, 10);
  CSSNodeStyleSetBorder(root, YGEdgeTop, 10);
  CSSNodeStyleSetBorder(root, YGEdgeRight, 10);
  CSSNodeStyleSetBorder(root, YGEdgeBottom, 10);
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetPositionType(root_child0, YGPositionTypeAbsolute);
  CSSNodeStyleSetPosition(root_child0, YGEdgeLeft, 0);
  CSSNodeStyleSetPosition(root_child0, YGEdgeTop, 0);
  CSSNodeStyleSetWidth(root_child0, 50);
  CSSNodeStyleSetHeight(root_child0, 50);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetPositionType(root_child1, YGPositionTypeAbsolute);
  CSSNodeStyleSetPosition(root_child1, YGEdgeRight, 0);
  CSSNodeStyleSetPosition(root_child1, YGEdgeBottom, 0);
  CSSNodeStyleSetWidth(root_child1, 50);
  CSSNodeStyleSetHeight(root_child1, 50);
  CSSNodeInsertChild(root, root_child1, 1);
  CSSNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionLTR);

  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_FLOAT_EQ(40, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_FLOAT_EQ(40, CSSNodeLayoutGetTop(root_child1));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetHeight(root_child1));

  CSSNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionRTL);

  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_FLOAT_EQ(40, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_FLOAT_EQ(40, CSSNodeLayoutGetTop(root_child1));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetHeight(root_child1));

  CSSNodeFreeRecursive(root);
}