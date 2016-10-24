#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(void)
{
        int i = 0;
        Queue * queue = emptyqueue();

        if(is_empty(queue)){
                printf("Queue is empty.\n\n\n");
        } else {
                printf("Queue is not empty.\n\n\n");
        }

        printf("Adding elements...\n");
        while(i != 10){
                printf("Enqueueing %d into queue..\n", i);
                enqueue(i, queue);
                i++;
        }

        if(is_empty(queue)){
                printf("Queue is empty.\n\n\n");
        } else {
                printf("Queue is not empty.\n\n\n");
        }

        display(queue);

        for(i = 0; i < 3; i ++)
                printf("Dequeueing: %d\n", dequeue(queue));


        printf("\n\nTasks left in queue: %d\n", size(queue));
        display(queue);

        destroy(queue);
        return 0;
}
