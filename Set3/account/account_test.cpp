#include<gtest/gtest.h>
#include"account.h"
#include"CreditAccount.h"
#include"SavingsAccount.h"
using namespace std;

TEST(CreditAccount,DefaultConstructor) {
    CreditAccount ca1("568","gerald",7000);
    EXPECT_EQ(6000,ca1.debit(1000));
    EXPECT_EQ(7000,ca1.credit(1000));
}
