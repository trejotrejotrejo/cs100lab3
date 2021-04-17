#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "pow.hpp"

//Unit tests for op function
TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpEvaluateFloatingPt) {
    Op* test = new Op(3.5);
    EXPECT_EQ(test->evaluate(), 3.5);
}

TEST(OpTest, OpEvaluateNeg) {
    Op* test = new Op(-24);
    EXPECT_EQ(test->evaluate(), -24);
}

TEST(OpTest, OpEvaluateLargeNum) {
    Op* test = new Op(68570450);
    EXPECT_EQ(test->evaluate(), 68570450);
}

TEST(OpTest, OpEvaluateStringify) {
    Op* test = new Op(28990);
    EXPECT_EQ(test->evaluate(), 28990);
}

#endif //__OP_TEST_HPP__

