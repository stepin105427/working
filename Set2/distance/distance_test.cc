#include "distance.h"
#include <gtest/gtest.h>
TEST(distance,test) {
    distance d1(90,40);
    EXPECT_EQ(90,d1.get_feet());
    EXPECT_EQ(40,d1.get_inch());
}
