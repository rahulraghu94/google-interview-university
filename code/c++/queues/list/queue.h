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

typedef struct queue {
	Node * head;
	Node * tail;
} Queue;

Queue * emptyqueue();
void enqueue(int data, Queue * queue);
void display(Queue * queue);
void destroy(Queue * queue);
int size(Queue * queue);
int is_empty(Queue * queue);
int dequeue(Queue * queue);

#endif
