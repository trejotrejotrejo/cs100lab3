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

//Unit tests for add function
TEST(AddingTest, AddEvaluateZero) {
      Op* test1 = new Op(0);
      Op* test2 = new Op(0);
      Base* ad = new Add(test1, test2);
    EXPECT_EQ(ad->evaluate(), 0);
 }
  
TEST(AddingTest, AddEvaluatePositiveVal) {
       Op* test1 = new Op(46);
       Op* test2 = new Op(92);
       Base* ad = new Add(test1, test2);
       EXPECT_EQ(ad->evaluate(), 138);
   }
  
TEST(AddingTest, AddEvaluateNegativeVal) {
      Op* test1 = new Op(4);
      Op* test2 = new Op(-11);
      Base* ad = new Add(test1, test2);
      EXPECT_EQ(ad->evaluate(), -7);
 }
 
 TEST(AddingTest, AddEvaluateFloatingPt) {
      Op* test1 = new Op(7.19);
      Op* test2 = new Op(17.38);
      Base* ad = new Add(test1, test2);
      EXPECT_EQ(ad->evaluate(), 24.57);
 }
 
 TEST(AddingTest, AddEvaluateLargeNum) {
     Op* test1 = new Op(6180010);
     Op* test2 = new Op(4939823);
     Base* ad = new Add(test1, test2);
      EXPECT_EQ(ad->evaluate(), 11119833);
 }
 
 TEST(AddingTest, AddEvaluateStringify) {
     Op* test1 = new Op(7);
     Op* test2 = new Op(14);
     Base* ad = new Add(test1, test2);
     EXPECT_EQ(ad->stringify(), "7 + 14");
}

#endif //__OP_TEST_HPP__
