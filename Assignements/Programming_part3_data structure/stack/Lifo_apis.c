/*
 * Lifo_apis.c
 *
 *  Created on: Mar 25, 2023
 *      Author: ELBOSTAN
 */
#include "lifo.h"
lifo_status_t specify_buf_case(lifo_buffer_t* lifo){

	if(!lifo->base || !lifo->length || !lifo->head){
		return lifo_null;
	}
	if(lifo->length==lifo->count){
		return lifo_full;
	}
	if(!lifo->count && (lifo->base==lifo->head))
	{
		return lifo_empty
				;
	}

	return lifo_no_error;
}

lifo_status_t push(lifo_buffer_t* lifo,element_t en_temp){

	if(lifo->count==lifo->length)
		return lifo_full;
	else{
		*(lifo->head) = en_temp;
		lifo->count++;
		lifo->head++;
		return lifo_no_error;
	}

}
lifo_status_t pop(lifo_buffer_t* lifo,element_t* out_temp){
	if(specify_buf_case((lifo_buffer_t*) lifo) == lifo_no_error)
	{
		if(specify_buf_case((lifo_buffer_t*) lifo) == lifo_empty)
			return lifo_empty;
		else{
			lifo->head--;
			*out_temp=*(lifo->head);
			lifo->count--;
			return lifo_no_error;
		}
	}

	else
		return lifo_null;

}
lifo_status_t init_lifo(lifo_buffer_t* lifo,element_t *buff,element_t lenth)
{
	lifo->base=buff;
	lifo->head=lifo->base;
	lifo->count=0;
	lifo->length=lenth;
	if((lifo->base)&&(lifo->head)){
		printf("your buffer stack is created\n");
		return lifo_no_error;}
	else
		return lifo_null;

}
