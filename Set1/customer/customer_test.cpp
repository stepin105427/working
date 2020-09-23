/*#include<iostream>
#include"customer.h"
using namespace std;
main()
{
    Customer c1(123,54647,"curre","higgs",5674);
    c1.display();
    c1.credit(3452);
    c1.display();
    c1.getbalance();
    c1.makecall();
}*/
#include<gtest/gtest.h>
#include"Customer.h"
TEST(Customer,test)
{
    Customer c1(123,54647,"curre","higgs",5000);
    EXPECT_EQ(54647,c1.makecall());
    EXPECT_EQ(5000,c1.getbalance());
    EXPECT_EQ(7000,c1.credit(2000));
}
