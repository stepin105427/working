/*#include<iostream>
#include"point.h"
using namespace std;
main()
{
    Point p1(4,0);
    p1.isOrigin();
    p1.quadrant();
    p1.isOnXAxis();
    p1.isOnYAxis();
    p1.display();
}*/
#include<gtest/gtest.h>
#include"Point.h"
TEST(Point,test)
{
    Point p1(4,0);
    EXPECT_EQ(0,p1.isOrigin());
}
