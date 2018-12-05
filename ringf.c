#include "ringf.h"


abuffer init_buffer(size_t m, int *pointer,size_t s) {



	abuffer buffer;
	buffer.size = s;
	//for (int i = 0; i < 4; i++) {
	//	printf("%d %d %d \n", data123->g, data123->i, data123->y);
	//	data123++;
	//}
	buffer.start = 0;
	buffer.head = 0;
	buffer.tail = 0;
	buffer.full = false;
	buffer.num = 0;
	buffer.pointer = pointer;
	return buffer;
};

void hello() {

	printf("work god damn it /n");
}

void add_element(abuffer *cbuf,int element) {

	
	if (cbuf->num >= cbuf->size) {
		cbuf->num = cbuf->size;
	}
	else {
	
		cbuf->num++;
	}
	if (cbuf->head >= cbuf->size) {
		cbuf->head = cbuf->size;
	}
	else {
		cbuf->head ++;
	}
	if (cbuf->num > 1) {
	
		shift(cbuf);
	}
	
	cbuf->pointer[cbuf->start] = (int)element;
	

	



	


}
void shift(abuffer *cbuf) {
	


	for (int i = (int)cbuf->num;i >= 0;i--) {

		cbuf->pointer[i + 1] =(int) cbuf->pointer[i];

	}


}