#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "rand.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(RandTest, RandEvaluate) {
    Rand* test = new Rand();
    EXPECT_EQ(test->evaluate(), 100);

TEST(RandTest, RandEvaluateStringify) {
    Rand* test = new Rand();
    EXPECT_EQ(test->evaluate(), stod(test->stringify()), 0.001);
}

#endif //__OP_TEST_HPP__
