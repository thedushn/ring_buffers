
#include  <stdio.h>
#include "ringf.h"
#include <stdlib.h>

int main() {

	int size = 3;
	
	int *ptr = calloc(size,sizeof(int));

	

	int i = 10;

	abuffer cbuffer;
	cbuffer = init_buffer(size, ptr, size);
	add_element(&cbuffer, i);
	i = 20;
	//printf("%d\n", (int *)cbuffer.pointer[cbuffer.start]);
	add_element(&cbuffer, i);
	printf("%d\n", (int )cbuffer.pointer[0]);
	printf("%d\n", (int )cbuffer.pointer[1]);

	i = 30;
	add_element(&cbuffer, i);
	printf("%d\n", (int )cbuffer.pointer[0]);
	printf("%d\n", (int )cbuffer.pointer[1]);
	printf("%d\n", (int )cbuffer.pointer[2]);
	i = 40;
	add_element(&cbuffer, i);
	printf("%d\n", (int )cbuffer.pointer[0]);
	printf("%d\n", (int )cbuffer.pointer[1]);
	printf("%d\n", (int )cbuffer.pointer[2]);
	printf("%d\n", (int )cbuffer.pointer[3]);
	free(ptr);
	//free(data123);
	
	return 0;
}