/*
 * lifo.h
 *
 *  Created on: Mar 25, 2023
 *      Author: ELBOSTAN
 */

#ifndef LIFO_H_
#define LIFO_H_

#include"stdio.h"
#include "stdint.h"
#include"stdlib.h"

#define element_t unsigned char
typedef struct{
	element_t count;
	element_t length;
	element_t* head;
	element_t* base;
}lifo_buffer_t;
//=======================
typedef enum{
	lifo_no_error,
	lifo_empty,
	lifo_full,
	lifo_null
}lifo_status_t;
///creation our APIS in this stack


lifo_status_t specify_buf_case(lifo_buffer_t* lifo)
lifo_status_t push(lifo_buffer_t* lifo,element_t en_temp)
lifo_status_t pop(lifo_buffer_t* lifo,element_t* out_temp)
lifo_status_t init_lifo(lifo_buffer_t* lifo,element_t *buff,element_t lenth)










#endif /* LIFO_H_ */
