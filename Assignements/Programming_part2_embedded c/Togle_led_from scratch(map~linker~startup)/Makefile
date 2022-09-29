cc=arm-none-eabi
CFLAGS= -mcpu=cortex-m3 -mthumb
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
OBJAS=$(AS:.s=.o)
project_name=main
all: $(project_name).bin
	@echo "___________Build is Done____________"
%.o: %.s
	$(cc)-as.exe -c $(CFLAGS)  $< -o $@
%.o: %.c
	$(cc)-gcc.exe -c $(CFLAGS) $(INCS) $< -o $@
$(project_name).elf: $(OBJ) $(OBJAS)
	$(cc)-ld.exe -T linker_script.ld $(OBJAS) $(OBJ) -o $(LIBS) $@ -Map=map_file.map
$(project_name).bin: $(project_name).elf
	$(cc)-objcopy  -O binary $<  $@

#clean:
	#rm *.bin *.elf	
#clean_all:
	#rm *.o *.bin *.elf