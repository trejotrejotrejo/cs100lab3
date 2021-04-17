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

TEST(DivTest, DivEvaluateZero) {
    Op* test1 = new Op(0);
    Op* test2 = new Op(5);
    Base* divv = new Div(test1, test2);
    EXPECT_EQ(divv->evaluate(), 0);
}

TEST(DivTest, DivEvaluatePositiveVal) {
    Op* test1 = new Op(30);
    Op* test2 = new Op(5);
    Base* divv = new Div(test1, test2) {
    EXPECT_EQ(divv->evaluate() 6);
}#include "gtest/gtest.h"
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
    Op* test2 = new Op(14);
    Base* mul = new Mult(test1, test2);
    EXPECT_EQ(mul->stringify(), "13 * 14");
}

//Unit tests for division function
TEST(DivTest, DivEvaluateZero) {
    Op* test1 = new Op(0);
    Op* test2 = new Op(5);
    Base* divv = new Div(test1, test2);
    EXPECT_EQ(divv->evaluate(), 0);
}

TEST(DivTest, DivEvaluatePositiveVal) {
    Op* test1 = new Op(49);
    Op* test2 = new Op(7);
    Base* divv = new Div(test1, test2);
    EXPECT_EQ(divv->evaluate(). 7);
}

TEST(DivTest, DivEvaluateNegativeVal) {
    Op* test1 = new Op(-144);
    Op* test2 = new Op(4);
    Base* divv = new Div(test1, test2);
    EXPECT_EQ (divv->evaluate(), -36);
}

TEST(DivTest, DivEvaluateFloatingPoint) {
    Op* test1 = new Op(3.5);
    Op* test2 = new Op(7.5);
    Base* divv = new Div(test1, test2);
    EXPECT_EQ(divv->evaluate(), 26.25);
}

TEST(DivTest, DivEvaluateStringify) {
    Op* test1 = new Op(55);
    Op* test2 = new Op(11);
    Base* divv = new Div(test1, test2);
    EXPECT_EQ(divv->stringify(), "55 / 11");
} 

#endif //__OP_TEST_HPP__
