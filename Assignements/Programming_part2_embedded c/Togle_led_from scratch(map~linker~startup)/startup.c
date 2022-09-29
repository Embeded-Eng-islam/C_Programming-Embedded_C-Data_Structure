/* learn-in-depth
Unit3_lesson3_lab2
Eng: Islam Abdelnasser Ibrahim
mastering embeded system online diploma */

#include <stdint.h>
#define stack_top (uint32_t) 0x20001000
extern int main(void);

void reset_handler(void){
	main();
}

void NMI(void){
	reset_handler();
}
void hard_fault(void){
	reset_handler();
}
void bus_fault(void){
	reset_handler();
}
void Reserved(void){
	reset_handler();
}

volatile uint32_t vectors[] __attribute__((section(".vectors")))={
stack_top,
(uint32_t) &reset_handler,
(uint32_t) &NMI,
(uint32_t) &hard_fault,
(uint32_t) &bus_fault,
(uint32_t) &Reserved
};