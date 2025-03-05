#ifndef MEMORY_H
#define MEMORY_H

#include <stddef.h>

void initialize_memory(size_t total_size);
void* allocate(size_t size);
void free(void* ptr);
void display_memory_status();

#endif // MEMORY_H