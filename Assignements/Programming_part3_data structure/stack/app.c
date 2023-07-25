#include "lifo.h"
#define buffer_length 5

int main(){
	element_t* my_buffer;

	element_t i;
	element_t temp;
	lifo_buffer_t* my_lifo=NULL;
	my_buffer = (element_t*) malloc(sizeof(buffer_length)*1);
	init_lifo(my_lifo->base,my_buffer,buffer_length);
	printf("\n=====================================\n");
	for (i = 0; i < 7; ++i) {
		printf("========= pushining in fifo=========");
		if (push(my_lifo,i) == lifo_no_error)
			printf("========the element pushed successfully : %d ============\n",i);

		else
			printf("========the element pushed un successfully : %d ============\n",i);
	}
	printf("\n=====================================\n");

	for (int x = 0; x < 5; ++x) {
		printf("========= popining in fifo=========");
		if (pop(my_lifo,&temp)==lifo_no_error)
			printf("========the element poped is successfully : %d ============\n",temp);

		else
			printf("========the element poped is un successfully : %d ============\n",temp);
	}

	printf("\n=====================================\n");


	return 0;
