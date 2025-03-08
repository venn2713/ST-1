// Copyright 2025 VasilevSA

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(CheckPrimeTest, Prime2) { EXPECT_TRUE(checkPrime(2)); }
TEST(CheckPrimeTest, Prime3) { EXPECT_TRUE(checkPrime(3)); }
TEST(CheckPrimeTest, Prime5) { EXPECT_TRUE(checkPrime(5)); }
TEST(CheckPrimeTest, Prime13) { EXPECT_TRUE(checkPrime(13)); }
TEST(CheckPrimeTest, NotPrime1) { EXPECT_FALSE(checkPrime(1)); }
TEST(CheckPrimeTest, NotPrime0) { EXPECT_FALSE(checkPrime(0)); }
TEST(CheckPrimeTest, NotPrime4) { EXPECT_FALSE(checkPrime(4)); }
TEST(CheckPrimeTest, NotPrime9) { EXPECT_FALSE(checkPrime(9)); }

TEST(NPrimeTest, First) { EXPECT_EQ(nPrime(1), 2); }
TEST(NPrimeTest, Second) { EXPECT_EQ(nPrime(2), 3); }
TEST(NPrimeTest, Third) { EXPECT_EQ(nPrime(3), 5); }
TEST(NPrimeTest, Fourth) { EXPECT_EQ(nPrime(4), 7); }
TEST(NPrimeTest, Fifth) { EXPECT_EQ(nPrime(5), 11); }
TEST(NPrimeTest, Tenth) { EXPECT_EQ(nPrime(10), 29); }

TEST(NextPrimeTest, After2) { EXPECT_EQ(nextPrime(2), 3); }
TEST(NextPrimeTest, After3) { EXPECT_EQ(nextPrime(3), 5); }
TEST(NextPrimeTest, After11) { EXPECT_EQ(nextPrime(11), 13); }
TEST(NextPrimeTest, After20) { EXPECT_EQ(nextPrime(20), 23); }

TEST(SumPrimeTest, UpTo2) { EXPECT_EQ(sumPrime(2), 0); }
TEST(SumPrimeTest, UpTo3) { EXPECT_EQ(sumPrime(3), 2); }
TEST(SumPrimeTest, UpTo5) { EXPECT_EQ(sumPrime(5), 5); }
TEST(SumPrimeTest, UpTo10) { EXPECT_EQ(sumPrime(10), 17); }
TEST(SumPrimeTest, UpTo20) { EXPECT_EQ(sumPrime(20), 77); }
