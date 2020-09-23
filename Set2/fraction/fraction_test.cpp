#include<gtest/gtest.h>
#include"Fraction.h"
TEST(Fraction,test)
{
    Fraction f1(20,30);
    EXPECT_EQ(20,f1.getnume());
    EXPECT_EQ(30,f1.getdeno());
}
