#ifndef _HEAP_
#define _HEAP_

#define MAX_SIZE 100
#define TOP 1

extern int arr[];
extern int size;

void sift_up(int arr[], int index);
void sift_down(int arr[], int index);
void insert_heap(int arr[], int value);
int extract_max(int arr[]);
void remove_node(int arr[], int index);
void change_priorety(int arr[], int index, int new_priorety);

void build_heap(int arr[]);
void sort_heap(int arr[]);
void swap(int arr[], int a, int b);

int parent(int index);
int right_child(int index);
int left_child(int index);

void print_heap(int arr[]);

#endif