//
// Created by dani on 10/10/20.
//

#include "gtest/gtest.h"





int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return 2;
    }
}

TEST(GraphSuite, Example){
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(0), 1);
    EXPECT_EQ(factorial(6857), 2);
}