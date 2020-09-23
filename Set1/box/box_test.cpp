/*#include<iostream>
#include"Box.h"
using namespace std;
main()
{
    Box b1(1,2,3);
    b1.display();
    b1.volume();
}*/
#include<gtest/gtest.h>
#include"Box.h"
TEST(Box,test)
{
    Box b1(1,2,3);
    EXPECT_EQ(1,b1.length(1));
    EXPECT_EQ(6,b1.volume());
}

