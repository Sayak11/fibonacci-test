#include<iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
#include <gtest/gtest.h>
#include <iostream>
#include "fibonacci_header.h"
#include "fibonacci_test.cc"
using namespace std;

//calling fibonacci function
int nth_term = Fibonacci(5);

// Demonstrate some basic assertions.
TEST(FibonacciTest, BasicAssertions_2) {
  // Expect two strings not to be equal.
  //EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(nth_term, 3);
}