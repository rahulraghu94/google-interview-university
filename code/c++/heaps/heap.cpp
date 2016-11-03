#include <iostream>
#include <limits.h>
#include "heap.h"

using namespace std;

int arr[MAX_SIZE] = {0};
int size = 0;

int parent(int index)
{
	return index / 2;
}

int right_child(int index)
{
	return 2 * index;
}

int left_child(int index)
{
	return (2 * index + 1);
}

void swap(int arr[], int a, int b)
{
	int temp;
	temp = arr[b];
	arr[b] = arr[a];
	arr[a] = temp;
}

void sift_up(int arr[], int index)
{
	while(index > 1 && arr[parent(index)] < arr[index]){
		swap(arr, parent(index), index);
		index = parent(index);
	}
}

void sift_down(int arr[], int index)
{
	int max_index = index;
	int left = left_child(index);

	if(left <= size && arr[left] > arr[max_index]){
		max_index = left;
	}

	int right = right_child(index);
	if(right <= size && arr[right] > arr[max_index]){
		max_index = right;
	}

	if(index != max_index){
		swap(arr, index, max_index);
		sift_down(arr, max_index);
	}
}

void insert_heap(int arr[], int value)
{
	if (size == MAX_SIZE){
		cout << "Heap is full!" << endl;
		return;
	}

	size++;
	arr[size] = value;
	sift_up(arr, size);
}

int extract_max(int arr[])
{
	int result = arr[TOP];

	arr[TOP] = arr[size];
	size--;
	sift_down(arr, TOP);

	return result;
}

void remove_node(int arr[], int index)
{
	arr[index] = INT_MAX;
	sift_up(arr, index);

	extract_max(arr);
}

void change_priorety(int arr[], int index, int priorety)
{
	int old_priorrety = arr[index];

	arr[index] = priorety;

	if(priorety > old_priorrety){
		sift_up(arr, index);
	} else {
		sift_down(arr, index);
	}
}


void print_heap(int arr[])
{
	for(int i = 1; i < size; i++)
		cout << arr[i] << "\t";

	cout << endl;
}