#include"fifo.h"
fifo_status init_fifo(fifo_buf_t* fifo,element_type* buf,element_type length)
{
	fifo->count=0;
	fifo->base=buf;
	fifo->head=fifo->base;
	fifo->tail=fifo->base;
	fifo->length=length;
	if (fifo->base&&fifo->length)
		return fifo_noerror;
	else
		return fifo_null;
}


fifo_status enqueue_fifo ( fifo_buf_t* fifo, element_type* en_data){

	if( (full_fifo(fifo)== fifo_noerror) || (full_fifo(fifo)==fifo_empty) ){

		*(fifo->head)= *en_data;
		fifo->count++;

		if(fifo->count==fifo->length){
			fifo->head=fifo->base;
		}
		else{
			fifo->head++;
		}
		return fifo_noerror;
	}
	else
	{
		return full_fifo(fifo);}

}



fifo_status dequeue_fifo(fifo_buf_t* fifo,element_type* de_data){

	if( (full_fifo(fifo)== fifo_noerror) || (full_fifo(fifo)==fifo_full) ){

		*de_data= *(fifo->tail);
		fifo->count--;

		if(fifo->count==0){
			fifo->tail=fifo->base;
		}
		else{
			fifo->tail++;
		}
		return fifo_noerror;
	}
	else if(full_fifo(fifo) == fifo_empty)
	{  printf("this fifo has an zero element\n");
	return fifo_empty;}

	else
		return fifo_null;



}

void print_fifo(fifo_buf_t* fifo){
	element_type* temp;
	int i;
	if( (full_fifo(fifo)== fifo_null) || (full_fifo(fifo) == fifo_empty) ){
		printf(" your fifo is empty from any items or not created \n");

	}

	else {
		printf("-----------fifo print-----------\n");
		temp=fifo->tail;
		for (i = 0; i < (fifo->count); ++i) {
			printf(" the %d st item is : %d\n",i,*temp);
			temp++;
		}
		printf("-----------print terminated-----------\n");

	}

}


fifo_status full_fifo(fifo_buf_t* fifo){

	if(!fifo->base || !fifo->length || !fifo->head){
		return fifo_null;
	}
	if(fifo->length==fifo->count){
		return fifo_full;
	}
	if(!fifo->count && (fifo->base==fifo->head))
	{
		return fifo_empty
				;
	}

	return fifo_noerror;
}
