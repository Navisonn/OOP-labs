#include <gtest/gtest.h>
#include "../src/number.h" 

TEST(DigitsTest, SingleDigitNumbers) {
    EXPECT_TRUE(Digits(0));
    EXPECT_TRUE(Digits(1));
    EXPECT_TRUE(Digits(9));
}

TEST(DigitsTest, ValidSequences) {
    EXPECT_TRUE(Digits(11));
    EXPECT_TRUE(Digits(12));
    EXPECT_TRUE(Digits(12345));
    EXPECT_TRUE(Digits(11235));
    EXPECT_TRUE(Digits(5555));
}

TEST(DigitsTest, InvalidSequences) {
    EXPECT_FALSE(Digits(21));
    EXPECT_FALSE(Digits(54321));
    EXPECT_FALSE(Digits(918));
    EXPECT_FALSE(Digits(12315));
}

TEST(DigitsTest, EdgeCases) {
    EXPECT_FALSE(Digits(100));
    EXPECT_FALSE(Digits(1000));
    EXPECT_FALSE(Digits(1110));
}
