#include <iostream>
#include <limits.h>
#include "heap.h"

using namespace std;

int main()
{
	cout << "Inserting values..." << endl;
	insert_heap(arr, 100);
	insert_heap(arr, 80);
	insert_heap(arr, 90);
	insert_heap(arr, 20);
	insert_heap(arr, 40);
	insert_heap(arr, 120);
	insert_heap(arr, 50);
	insert_heap(arr, 10);
	insert_heap(arr, 840);
	insert_heap(arr, 94);
	cout << "The heap after insertions: " << endl;;
	print_heap(arr);
	cout << endl << endl;

	cout << "Extracting the MAX value: " << endl;
	cout << "MAX 1: " << extract_max(arr) << endl;
	cout << "MAX 2: " << extract_max(arr) << endl;
	cout << "The heap after extraction looks like: " << endl;
	print_heap(arr);
	cout << endl << endl;

	cout << "Removing element at node 5: " << endl;
	remove_node(arr, 5);
	cout << "The heap after deleting element looks like: " << endl;
	print_heap(arr);
	cout << endl << endl;

	cout << "Changing priorety of element 6 to 1000: " << endl;
	change_priorety(arr, 6, 1000);
	cout << "The heap looks like after changing priorety:"  << endl;
	print_heap(arr);

	return 0;
}