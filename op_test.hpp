#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "pow.hpp"
#include "op.hpp"


   TEST(PowerTest, PowEvaluateZero) {
    Op* test1 = new Op(14);
    Op* test2 = new Op(0);
    Base* power = new Pow(test1, test2);
    EXPECT_EQ(power->evaluate(), 1);
}

TEST(PowerTest, PowEvaluateNeg) {
    Op* test1 = new Op(-9);
    Op* test2 = new Op(3);
    Base* power = new Pow(test1, test2);
    EXPECT_EQ(power->evaluate(), -729);
}

 TEST(PowerTest, PowEvaluatePos) {
     Op* test1 = new Op(4);
     Op* test2 = new Op(3);
     Base* power = new Pow(test1, test2);
     EXPECT_EQ(power->evaluate(), 64);
 }
 
 TEST(PowerTest, PowFloatingPt) {
      Op* test1 = new Op(12.7);
      Op* test2 = new Op(5.4);
      Base* power = new Pow(test1, test2);
      EXPECT_FLOAT_EQ(power->evaluate(), 913145.7311);
 }
 
 TEST(PowerTest, PowStringify) {
      Op* test1 = new Op(20);
      Op* test2 = new Op(5);
      Base* power = new Pow(test1, test2);
      EXPECT_EQ(power->stringify(), "20 ^ 5");
}

#endif //__OP_TEST_HPP__
