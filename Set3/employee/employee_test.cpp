#include<gtest/gtest.h>
#include"Employee.h"
#include"Manager.h"
#include"Trainee.h"
#include"Employee.h"
#include"Engineer.h"

TEST(Engineer,Test1)
{
    Engineer e1("e1","macry", 5000, 500, 50);
    e1.appraisal(1000);
    EXPECT_EQ(6000,e1.payroll());
}
