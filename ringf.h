#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct _buffer abuffer;
struct _buffer {

	size_t size;
	size_t start;
	size_t num;
	size_t tail;
	size_t head;
	bool full;
	int* pointer;

};
typedef struct _data1 data1;
struct _data1 {


	int i;
	int y;
	long g;
	char helo[4];
};
data1 *data123;

abuffer init_buffer(size_t m, int *type1,size_t s);

void reset_buffer(abuffer * a);
void add_element(abuffer *cbuf, int element);
void shift(abuffer *cbuf);