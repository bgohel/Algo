CC = arm-none-eabi-gcc
MACH = cortex-m4
CFLAGS = -c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall -O0
# LDFLAGS = -nostdlib -T linker.ld -Wl,-Map=final.map //no standard lib - disable printf
LDFLAGS = -mcpu=$(MACH) -mthumb -mfloat-abi=soft --specs=nano.specs  -T linker.ld -Wl,-Map=final.map #//integrating standard nano new lib library - enable printf
# LDFLAGS = -mcpu=$(MACH) -mthumb -mfloat-abi=soft --specs=rdimon.specs  -T linker.ld -Wl,-Map=final.map #//Enable semihosting library - enabled the printf logs



# all: main.o led.o stm32_startup.o  final.elf // for semihosting syscalls not required so removed - it already have the syscalls libs
all: main.o led.o stm32_startup.o syscalls.o final.elf 

main.o : main.c
	$(CC) $(CFLAGS) -o $@ $^
	
led.o : led.c
	$(CC) $(CFLAGS) -o $@ $^
	
stm32_startup.o : stm32_startup.c
	$(CC) $(CFLAGS) -o $@ $^

syscalls.o : syscalls.c
	$(CC) $(CFLAGS) -o $@ $^

final.elf : main.o led.o stm32_startup.o syscalls.o
	$(CC) $(LDFLAGS) -o $@ $^

# final.elf : main.o led.o stm32_startup.o  # no need syscalls in semihosting lib
# 	$(CC) $(LDFLAGS) -o $@ $^

load:
	openocd -f board\stm32f4discovery.cfg

clean: 
	rm -rf *.o *.elf