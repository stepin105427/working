#include<gtest/gtest.h>
#include"mytime.h"
TEST(Time,test)
{
    Time t1(2,34,56);
    EXPECT_EQ(2,t1.hrs());
    EXPECT_EQ(34,t1.minu());
    EXPECT_EQ(56,t1.sec());
}
