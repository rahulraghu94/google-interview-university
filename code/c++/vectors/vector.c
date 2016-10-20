#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

void vector_init(Vector *vector)
{
	vector->size = 0;
	vector->capacity = MAX_SIZE;
	vector->data = malloc(sizeof(int) * vector->capacity);
}

int vector_get(Vector *vector, int index)
{
	if(index >= vector->size){
		printf("Array out of bounds! Aborting..");
		return 0;
	}

	return vector->data[index];
}

void vector_double(Vector *vector)
{
	if(vector->size >= vector->capacity){
		vector->capacity *= 2;
		vector->data = realloc(vector->data, sizeof(int) * vector-> capacity);
	}
}

void vector_set(Vector *vector, int index, int value)
{
	while(index >= vector->size){
		vector_append(vector, 0);
	}

	vector_append(vector, value);
}

void vector_append(Vector *vector, int value)
{
	vector_double(vector);
	vector->data[vector->size++] = value;
}

void vector_destroy(Vector *vector)
{
	printf("Destroying array...\n");
	free(vector->data);
}

int vector_isempty(Vector *vector)
{
	if(vector->size == 0)
		return 1;
	return 0;

}

void vector_delete(Vector * vector, int index)
{
	if (index > vector->size){
		printf("Element out of bounds");
		return;
	}

	vector->data[index] = 0;
}

int vector_find(Vector *vector, int value)
{
	int i;

	for (i = 0; i < vector->size; i++){
		if(vector->data[i] == value)
			return i;
	}

	return -1;
}