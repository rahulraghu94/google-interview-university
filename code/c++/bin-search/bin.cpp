#include <iostream>
#include "bin.hpp"

using namespace std;

int binary_search(int key, int arry[])
{
	int first = 0, last = SIZE - 1, mid;

	while(first <= last){
		mid = (first + last) / 2;

		if (arry[mid] == key){
			break;
		} else if (arry[mid] > key){
			cout << "ARRAY[MIS] =" << arry[mid] << endl;
			last = mid -1;
		} else {
			first = mid + 1;
		}
	}

	if (arry[mid] == key){
		return mid;
	} else {
		return FAIL;
	}
}