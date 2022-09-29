#include"uart.h"
#define uart0dr *((volatile unsigned int*)((unsigned int*)0x101f1000))
void uart_tx_string(volatile unsigned char* ptr ){
while(*ptr != '\0'){
    uart0dr=(unsigned int)*ptr;
    ptr++;
    }
}
