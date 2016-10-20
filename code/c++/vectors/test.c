#include <stdio.h>
#include "vector.h"

int main()
{
	Vector v;
	int i;

	vector_init(&v);

	//Append stuff
	for(i = 0; i < 30; i++){
		vector_append(&v, i);
	}

	printf("Array element at 24th location: %d\n", vector_get(&v, 25));

	vector_set(&v, 100, 100);

	printf("Showing value of 100th element: %d\n", vector_get(&v, 101));

	vector_destroy(&v);

	return 0;

}