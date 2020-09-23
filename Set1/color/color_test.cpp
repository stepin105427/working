/*#include<iostream>
#include"color.h"
using namespace std;
main()
{
    Color c1(m_r,m_g,m_b);
    c1.display();
    c1.invert();
    c1.display();
}*/
#include<gtest/gtest.h>
#include"Color.h"
TEST(Color,test)
{
    Color c1(m_r,m_g,m_b);
    EXPECT_EQ(-255,c1.invert());
}
