#include <gtest/gtest.h>
#include "../src/number.h"  // ← ИСПРАВИТЬ путь!

TEST(DigitsTest, SingleDigitNumbers) {
    EXPECT_TRUE(Digits(0));
    EXPECT_TRUE(Digits(1));
    EXPECT_TRUE(Digits(9));
}

TEST(DigitsTest, ValidSequences) {
    EXPECT_TRUE(Digits(11));
    EXPECT_TRUE(Digits(12));
    EXPECT_TRUE(Digits(123));
    EXPECT_TRUE(Digits(1123));
    EXPECT_TRUE(Digits(555));
}

TEST(DigitsTest, InvalidSequences) {
    EXPECT_FALSE(Digits(21));
    EXPECT_FALSE(Digits(321));
    EXPECT_FALSE(Digits(918));
    EXPECT_FALSE(Digits(1231));
}

TEST(DigitsTest, EdgeCases) {
    EXPECT_FALSE(Digits(10));
    EXPECT_FALSE(Digits(100));
    EXPECT_FALSE(Digits(1110));
}
