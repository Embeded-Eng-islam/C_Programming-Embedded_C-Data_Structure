 /*
 ******************************************************************
 *                                                                *
 *                                                                *
 *                    UART_PROJECT                                *
 *    created by ENG : Islam Abdelnasser Ibrahim                  *
 *     at: Learn-in depth online diploma                          *
 *                                                                *
 *                                                                *
 ******************************************************************
 */
#include"uart.h"
unsigned char string_tx[100]="Learn-indepth-online-diploma-Eng.islam";
unsigned char const string_1tx[100]="Learn-indepth-online-diploma-Eng.islam";
void main(void){
uart_tx_string(string_tx);
}
