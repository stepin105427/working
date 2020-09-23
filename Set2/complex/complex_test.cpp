#include<gtest/gtest.h>
#include"Complex.h"
TEST(Complex,test)
{
    Complex c1(3,4);
    EXPECT_EQ(3,c1.real());
    EXPECT_EQ(4,c1.imag());
}
