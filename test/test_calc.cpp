#include <gtest/gtest.h>
#include "calc.hpp"

class CalcTestSuite : public ::testing::Test {
 protected:
  Calc sut_;
};

/**
 * @brief Construct a new test f object
 * 
 */
TEST_F(CalcTestSuite, SumAddsTwoInts) {
  EXPECT_EQ(4, sut_.sum(2, 2));
}

TEST_F(CalcTestSuite, MultiplyMultipliesTwoInts) {
  EXPECT_EQ(12, sut_.multiply(3, 4));
}
