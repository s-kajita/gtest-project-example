#include "gtest/gtest.h"

TEST(SampleTest, One)
{
  EXPECT_EQ(true, (1==2));
}

TEST(SampleTest, Two)
{
  EXPECT_EQ(true, (1+1==2));
}
