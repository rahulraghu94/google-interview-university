#include <stdio.h>
#include "queue.h"

Node * createnode(int data)
{
        Node * newNode = malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = NULL;
        return newNode;
}

Queue * emptyqueue()
{
        Queue * queue = malloc(sizeof(Queue));
        queue->head = NULL;
        queue->tail = NULL;
        return queue;
}

void display(Queue * queue)
{
        Node * current = queue->head;
        if(queue->head == NULL)
                return;

        while(current->next != NULL){
                printf("%d<-", current->data);
                current = current->next;
        }
        printf("%d\n", current->data);
}

void enqueue(int data, Queue * queue)
{
        Node * current = NULL;
        if(queue->head == NULL){
                queue->head = createnode(data);
                queue->tail = queue->head;
        } else {
               current = queue->tail;
               current->next = createnode(data);
               queue->tail = current->next;
        }
}

void destroy(Queue * queue)
{
        Node * current = queue->head;
        Node * next = current;
        while(current != NULL){
                next = current->next;
                free(current);
                current = next;
        }
        free(queue);
}

int size(Queue * queue)
{
        int count = 0;
        Node * current = queue->head;

        if(queue->head == NULL)
                return 0;

        while(current->next != NULL){
                count++;
                current = current->next;
        }
        count++;

        return count;
}

int is_empty(Queue * queue)
{
        if(queue->head == NULL)
                return TRUE;
        return FALSE;
}

int dequeue(Queue * queue)
{
        Node * currant = queue -> head;
        Node * next = currant -> next;
        queue->head = next;

        int data = currant->data;
        free(currant);

        return data;
}