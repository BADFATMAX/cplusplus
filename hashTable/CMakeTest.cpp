#include <iostream>
#include "HashTable.h"
#include "gtest/gtest.h"
std::pair<Key, Value> vs[6] = {{"Elon Musk",{55,100}},
                               {"Benedict Cumberbatch",{40, 70}},
                               {"Tom Holland", {16, 69}},
                               {"Andrew Garfield ", {27, 67}},
                               {"Tobey Maguire", {34, 75}},
                               {"Peter Parker",{18, 69}}};
class ReadyHT : public ::testing::Test {
protected:
    HashTable *htp;
    void SetUp() override {
        htp = new HashTable(2);
        for (int i = 0; i < 5; i++) {
            htp->insert(vs[i].first, vs[i].second);
        }
        std::cout <<"Yes";
    }
    void TearDown() override {
        htp->clear();
        // Code here will be called immediately after each test (right
        // before the destructor).
    }
};

TEST_F(ReadyHT, f1){
    int m = htp->size();
    EXPECT_NE(m,0);
    EXPECT_GT(htp->size_max(), htp->size());
    EXPECT_FALSE(htp->empty());
}
TEST_F(ReadyHT, f2){
    auto htp2 = new HashTable(2);
    htp2->insert("qwerty", {4,4});
    htp->swap(*htp2);
    EXPECT_EQ(htp->size(), 1);
    EXPECT_FALSE(htp2->contains("qwerty"));
    EXPECT_EQ(1, 1);
}
TEST(FromScratch, erase){
    auto htp = new HashTable(6);
    htp->insert("test", {7,7});
    htp->erase("test");
    EXPECT_TRUE(htp->empty());
    EXPECT_EQ(htp->size(), 0);
}
TEST(FromScratch, op1){
    auto ht = *(new HashTable(4));
    Student v = ht["none"];
    EXPECT_EQ(v.age, DEFAULT_HT_VAl1);
    EXPECT_EQ(v.weight, DEFAULT_HT_VAL2);
    EXPECT_FALSE(ht.empty());
    EXPECT_ANY_THROW(ht.at("none2"));
}

TEST_F(ReadyHT, cm){
    auto n = std::move(*htp);
    EXPECT_FALSE(n.empty());
    EXPECT_TRUE(htp->empty());
}
int main(int argc, char* argv[]){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}