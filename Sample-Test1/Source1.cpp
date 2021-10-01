#include<iostream>
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


int main()
{
	int n;
	cout << "Enter the n value: ";
	cin >> n;
	int nth_term = Fibonacci(n);
	cout << nth_term << endl;
	return 0;

//}