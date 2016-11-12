#include <iostream>

using namespace std;

#define NUM 40

int fib(int n)
{
	int arr[NUM];

	arr[0] = arr[1] = 1;

	for (int i = 2; i < NUM; i++){
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	return arr[NUM - 1];
}

int main()
{
	cout << "FIB: " << fib(NUM) << endl;

	return 0;
}