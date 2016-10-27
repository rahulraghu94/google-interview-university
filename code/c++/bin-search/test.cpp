#include <iostream>
#include "bin.hpp"

using namespace std;

int main()
{
	int result;
	int arry[SIZE];

	for (int i = 0; i < SIZE; i++){
		arry[i] = i;
		cout << arry[i] << "\t";
	}

	cout << "Calling search for key = 7" << endl;
	result = binary_search(7, arry);

	cout << "Element found at location: " << result << endl;
	cout << "Element at position " << result << " : " << arry[result] << endl;

	return 0;
}