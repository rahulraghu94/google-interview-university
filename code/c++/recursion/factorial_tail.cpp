#include <iostream>
using namespace std;

// Using tail recursion fr better optimization

int fact_util(int n, int acc)
{
	if(n == 0)
		return acc;

	fact_util(n - 1, acc * n);
}

int fact(int n)
{
	return fact_util(n, 1);
}

int main()
{
	cout << "Factorial os 6 = " << fact(6) << endl;;

	return 1;
}