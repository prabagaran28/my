CC=arm-none-eabi-gcc
MACH= -mcpu=cortex-m3
CFLAFS=  -c $(MACH) -mthumb  -std=gnu11 -Wall -O0 
LDFLAGS= -nostdlib -T linker.ld -Wl,-Map=final.map
all:second.o startup.o final.elf

second.o:second.c
	$(CC) $(CFLAFS) -o $@ $^

startup.o:startup.c
	$(CC) $(CFLAFS) -o $@ $^
final.elf:second.o startup.o 
	$(CC) $(LDFLAGS) -o $@ $^
	
clean:
	rm -rf *.o *.elf final.map