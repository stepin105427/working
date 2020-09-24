#include "stack.h"
#include "gtest/gtest.h"
#include "stack.cpp"


TEST(MyStack,test)
{
    MyStack <int> a(2);
    a.push(3);
    a.push(4);
    EXPECT_EQ(4,a.pop());
}
