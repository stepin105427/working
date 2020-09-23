/*#include<iostream>
#include"Image.h"
using namespace std;
main()
{
    Image i1(23,45,200,400);
    i1.move1(34,55);
    i1.display();
    i1.resize1(100,123);
    i1.display();
    i1.scale(5,5);
    i1.display();
}*/
#include<gtest/gtest.h>
#include"Image.h"
TEST(Image,test)
{
    Image i1(23,45,200,400);
    EXPECT_EQ((34,55),i1.move1(34,55));
}
