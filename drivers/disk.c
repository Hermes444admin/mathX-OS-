#include <stdio.h>
#include "disk.h"

void init_disk() {
    // Initialize disk hardware and data structures
    printf("Disk initialized.\n");
}

int read_disk(int sector, void* buffer, int size) {
    // Simulate reading from disk
    printf("Reading %d bytes from sector %d.\n", size, sector);
    // Here you would add actual disk reading logic
    return size; // Return number of bytes read
}

int write_disk(int sector, const void* data, int size) {
    // Simulate writing to disk
    printf("Writing %d bytes to sector %d.\n", size, sector);
    // Here you would add actual disk writing logic
    return size; // Return number of bytes written
}