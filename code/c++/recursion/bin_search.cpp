#include <iostream>
#include <array>

#define SIZE 10
using namespace std;

int bin_earch(array<int, SIZE> arr, int first, int last, int key)
{
	int mid = 0;
	mid = (first + last) / 2;
	cout << mid;

	if(first > last)
		return 0;
	else if(arr[mid] == key)
		return mid;
	else if(arr[mid] < key)
		return bin_earch(arr, mid + 1, last, key);
	else
		return bin_earch(arr, first, mid - 1, key);
}

int main()
{
	array<int, SIZE> arr;
	arr.fill(0);

	cout << "BIN SEARCH" <<  endl;

	for(int i = 0; i < (int)arr.size(); i++){
		arr[i] = i;
	}

	int pos = bin_earch(arr, 0, arr.size() - 1, 2);

	if(pos){
		cout << "ELement found at position: " << pos << endl;
	} else {
		cout << "Element not found!" << endl;
	}

	return 1;
}