//напишите программу для вычисления ЧФ с помощью разделяй и властвуй.
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int fib(int n)
{
	if (n == 1 || n == 2)
		return 1;
	if (n % 2 == 0)
	{
		return pow(fib(n / 2 + 1), 2) - pow(fib(n / 2 - 1), 2);
	}
		return pow(fib((n - 1) / 2), 2) + pow(fib((n - 1) / 2 + 1), 2);
}

int main()
{
	int n;
	cin >> n;
	cout << fib(n);
	return 0;
}
