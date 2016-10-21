#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void)
{
        int i = 20;
        List * list = emptylist();

        while(i != 0){
                add(i, list);
                i--;
        }

        display(list);

        delete(2, list);
        display(list);

        reverse(list);
        printf("Reversed: ");
        display(list);

        destroy(list);
        return 0;
}
