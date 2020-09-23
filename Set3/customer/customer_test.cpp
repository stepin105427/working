#include<gtest/gtest.h>
#include"Postpaid.h"
#include"Prepaid.h"
#include"Customer.h"

TEST(PostpaidCustomer,testPostpaid)
{
PostpaidCustomer c1("123","abc","9988",1030,0);
c1.makeCall(30);
EXPECT_EQ(1000,c1.getBalance());
}
TEST(PrepaidCustomer,testPrepaid)
{
PrepaidCustomer c1("123","abc","9988",1000,0);
c1.credit(500);
EXPECT_EQ(1500,c1.getBalance());
}
