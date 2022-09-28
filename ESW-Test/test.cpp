#include "gtest/gtest.h"

extern "C" {
    #include "Production.h"
}

class test : public ::testing::Test
{
protected:
    void SetUp() override {};
    void TearDown() override {};
};

TEST_F(test, Test_sum)
{
    int n = production_sum(3,4);
    EXPECT_EQ(n,7);
}
