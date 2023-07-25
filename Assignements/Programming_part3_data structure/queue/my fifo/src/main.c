/*
 ============================================================================

 Name        : fifo.c
 Author      : islam abdelnasser
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "fifo.h"
#define buf_length 5
element_type buffer[buf_length];
int main(void) {
element_type i=0;
unsigned char temp;

fifo_buf_t* my_queue;

if(init_fifo(&(my_queue->count),buffer,buf_length)== fifo_noerror){
	printf(" --------your fifo is created ---------------\r\n");
}

for (i = 0; i < 7; ++i) {
	printf("------fifo enqueue %x --------\n",i);
	if(enqueue_fifo(&(my_queue->count),&i) == fifo_noerror)
		printf("------your enqueue is successed %x --------\n",i);
	else
		printf("------your enqueue is failed %x --------\n",i);

		}
printf("\n\n---------------------------------------------\n");
print_fifo(&(my_queue->count));
dequeue_fifo(&(my_queue->count),&temp);
printf("------your dequeue is successed %x --------\n",temp);
dequeue_fifo(&(my_queue->count),&temp);
printf("------your dequeue is successed %x --------\n",temp);
print_fifo(&(my_queue->count));
for (i = 0; i < 2; ++i) {
	printf("------fifo enqueue %x --------\n",i);
	if(enqueue_fifo(&(my_queue->count),&i) == fifo_noerror)
		printf("------your enqueue is successed %x --------\n",i);
	else
		printf("------your enqueue is failed %x --------\n",i);

		}
print_fifo(&(my_queue->count));
	return 0;
}
