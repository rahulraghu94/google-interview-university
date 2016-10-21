#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void)
{
        int i = 20;
        List * list = emptylist();

        if(is_empty(list)){
                printf("List is empty.\n");
        } else {
                printf("List is not empty.\n");
        }

        printf("Adding elements...\n");
        while(i != 0){
                add(i, list);
                i--;
        }

        if(is_empty(list)){
                printf("List is empty.\n");
        } else {
                printf("List is not empty.\n");
        }

        display(list);
        printf("The value at index 3: %d\n", value_at(list, 3));
        delete(2, list);
        display(list);

        reverse(list);
        printf("Reversed: ");
        display(list);
        printf("Count: %d\n", size(list));
        destroy(list);
        return 0;
}
