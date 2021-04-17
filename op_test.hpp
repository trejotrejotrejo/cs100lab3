#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "op.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "rand.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpEvaluateNeg) {
    Op* test = new Op(-10);
    EXPECT_EQ(test->evaluate(), -10);
}

TEST(OpTest, OpEvaluateStringify) {
    Op* test = new Op(12345);
    EXPECT_EQ(test->evaluate(), 12345);
}

//Unit tests for multiplication function
TEST(MultTest, MultEvaluateZero) {
    Op* test1 = new Op(0);
    Op* test2 = new Op(0);
    Base* mul = new Mult(test1, test2);
    EXPECT_EQ(mul->evaluate(), 0);
}

TEST(MultTest, MultEvaluatePositiveVal) {
    Op* test1 = new Op(12);
    Op* test2 = new Op(9);
    Base* mul = new Mult(test1, test2);
    EXPECT_EQ(mul->evaluate(), 108);
}

TEST(MultTest, MultEvaluateNegativeVal);
    Op* test1 = new Op(-7);
    Op* test2 = new Op(8);
    Base* mul = new Mult(test1, test2);
    EXPECT_EQ(mul->evaluate(), -56);
}

TEST(MultTest, MultEvaluateFloatingPoint) {
    Op* test1 = new Op(12.5);
    Op* test2 = new Op(14.25);
    Base* mul = new Mult(test1, test2);
    EXPECT_EQ(mul->evaluate(), 178.125);
}

TEST(MultTest, MultEvaluateStringify) {
    Op* test1 = new Op(13);
    Op* test2 = new OP(14);
    Base* mul = new Mult(test1, test2);
    EXPECT_EQ(mul->stringify(), "13 * 14");
}

#endif //__OP_TEST_HPP__
