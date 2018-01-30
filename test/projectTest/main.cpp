#include "gtest/gtest.h"

#ifndef _ADDITION_HPP_
#define _ADDITION_HPP_
class Addition
{
public:
    static int twoValues(const int x, const int y);
};
#endif

int
Addition::twoValues(const int x, const int y)
{
    return x + y;
}


class AdditionTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test
    // (right before the destructor).
  }
};

TEST_F(AdditionTest,twoValues){
    const int x = 4;
    const int y = 5;
    Addition addition;
    EXPECT_EQ(9,addition.twoValues(x,y));
    EXPECT_EQ(5,addition.twoValues(2,3));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
