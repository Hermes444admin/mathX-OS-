CC=gcc
CFLAGS=-I./kernel/include -I./fs -I./lib -I./drivers -Wall -Wextra
OBJ=kernel/src/kernel.o kernel/src/memory.o drivers/keyboard.o drivers/screen.o drivers/disk.o fs/filesystem.o lib/string.o lib/math.o apps/shell.o

all: mpl_os

mpl_os: $(OBJ)
	$(CC) -o mpl_os $(OBJ)

kernel/src/kernel.o: kernel/src/kernel.c kernel/include/kernel.h
	$(CC) $(CFLAGS) -c kernel/src/kernel.c

kernel/src/memory.o: kernel/src/memory.c kernel/include/memory.h
	$(CC) $(CFLAGS) -c kernel/src/memory.c

drivers/keyboard.o: drivers/keyboard.c
	$(CC) $(CFLAGS) -c drivers/keyboard.c

drivers/screen.o: drivers/screen.c
	$(CC) $(CFLAGS) -c drivers/screen.c

drivers/disk.o: drivers/disk.c
	$(CC) $(CFLAGS) -c drivers/disk.c

fs/filesystem.o: fs/filesystem.c fs/filesystem.h
	$(CC) $(CFLAGS) -c fs/filesystem.c

lib/string.o: lib/string.c lib/common.h
	$(CC) $(CFLAGS) -c lib/string.c

lib/math.o: lib/math.c lib/common.h
	$(CC) $(CFLAGS) -c lib/math.c

apps/shell.o: apps/shell.c
	$(CC) $(CFLAGS) -c apps/shell.c

clean:
	rm -f $(OBJ) mpl_os