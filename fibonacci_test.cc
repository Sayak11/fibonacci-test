#include<iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
#include <gtest/gtest.h>
#include <iostream>
#include "fibonacci_header.h"
using namespace std;

int Fibonacci(int n) {
	int t1 = 0, t2 = 1, nextTerm = 0, i;
	if (n == 0 || n == 1)
		return n;
	else
		nextTerm = t1 + t2;
	for (i = 3; i <= n; ++i)
	{
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return t2;

}