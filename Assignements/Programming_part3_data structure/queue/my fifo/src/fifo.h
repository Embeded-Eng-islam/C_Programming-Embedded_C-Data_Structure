/*
 * fifo.h
 *
 *  Created on: Mar 23, 2023
 *      Author: ELBOSTAN
 */

#ifndef FIFO_H_
#define FIFO_H_
#include "stdbool.h"
#include "stdint.h"
#include <stdio.h>
#include <stdlib.h>
//typedef unsigned char		uint8_t;
#define element_type unsigned char
typedef struct{
	element_type count ;
	element_type length;
	element_type* base;
	element_type* head;
	element_type* tail;
}fifo_buf_t;


typedef enum{
	fifo_full,
	fifo_empty,
	fifo_null,
	fifo_noerror
}fifo_status;
// <------------ the APIs of my queue ----------->

fifo_status init_fifo(fifo_buf_t* fifo,element_type* buf,element_type length);
fifo_status enqueue_fifo(fifo_buf_t* fifo, element_type* en_data);
fifo_status dequeue_fifo(fifo_buf_t* fifo,element_type* de_data);
void print_fifo(fifo_buf_t *fifo);
fifo_status full_fifo(fifo_buf_t* fifo);

#endif /* FIFO_H_ */
