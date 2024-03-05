#copyright: Fayed
CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m4 -mthumb -gdwarf-2 -g
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)
ProjectName=unit3_lab4_cortexM4

all: $(ProjectName).bin
	@echo ">>>>>>>>>>>> Build is done <<<<<<<<<<<<<<<"


$(ProjectName).elf: $(AsOBJ) $(OBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(AsOBJ) $(OBJ) -o $(ProjectName).elf -Map=map_file.map
	cp $(ProjectName).elf $(ProjectName).axf

# startup.o: startup.s
# 	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

$(ProjectName).bin: $(ProjectName).elf
	$(CC)objcopy.exe -O binary $<  $@

clean:
	rm -f *.elf *.bin

clean_all:
	rm  -f *.o *.elf *.bin 



