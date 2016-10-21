#ifndef _LINKEDLIST_
#define _LINKEDLIST_

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct node {
	int data;
	struct node * next;
} Node;

typedef struct list {
	Node * head;
} List;

List * emptylist();
void add(int data, List * list);
void delete(int data, List * list);
void display(List * list);
void reverse(List * list);
void destroy(List * list);
int size(List * list);
int is_empty(List * list);
int value_at(List * list, int index);

#endif
