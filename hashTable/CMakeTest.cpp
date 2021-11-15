#include <iostream>
#include "HashTable.h"
#include "gtest/gtest.h"
class CnFirstTest : public ::testing::Test {
protected:
    void SetUp() override {
        std::cout <<"Da";
    }
    std::string m_string;
};

TEST_F(CnFirstTest, keka){
    EXPECT_EQ(4,4);
}
TEST(CMakeTests, CMakeTest)
{
EXPECT_EQ(1, 1);
}
TEST(CMakeTests, CMakeTes)
{
    EXPECT_EQ(1, 1);
}

int main(int argc, char* argv[]){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}