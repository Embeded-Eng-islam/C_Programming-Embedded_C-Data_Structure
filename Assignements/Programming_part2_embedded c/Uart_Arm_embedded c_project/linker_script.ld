ENTRY(reset)
MEMORY
{
        ram(rwx) : ORIGIN = 0x00000000, LENGTH = 64M
}
SECTIONS
{
   . = 0x10000 ;
    .startup . :
    {
      startup.o(.text)

     }>ram

   .text :
    {
      *(.text) *(.rodata)

     }>ram

   .data :
    {
      *(.data)

     }>ram
    .bss :
     {
      *(.bss)   

     }>ram
     
  . = . + 0x1000;
  stack_top = . ;
}