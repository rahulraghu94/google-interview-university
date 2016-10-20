#ifndef VECTOR_IMP
#define VECTOR_IMP

#define MAX_SIZE 10

typedef struct{
	int size;
	int capacity;
	int *data;
} Vector;

void vector_init(Vector *vector);
int vector_get(Vector *vector, int index);
void vector_set(Vector *vector, int index, int value);
void vector_destroy(Vector *vector);
void vector_double(Vector *vector);
void vector_append(Vector *vector, int value);
int vector_isempty(Vector *vector);
void vector_delete(Vector * vector, int index);
int vector_find(Vector *vector, int value);

#endif