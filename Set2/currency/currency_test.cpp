#include<gtest/gtest.h>
#include"Currency.h"
TEST(Currency,test)
{
    Currency c1(50,20);
    EXPECT_EQ(50,c1.rupees());
    EXPECT_EQ(20,c1.paise());
}
