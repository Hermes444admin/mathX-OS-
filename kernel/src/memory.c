#include <stddef.h>
#include "memory.h"

static void* memory_pool = NULL;
static size_t memory_size = 0;

void initialize_memory(size_t size) {
    memory_pool = malloc(size);
    memory_size = size;
}

void* allocate(size_t size) {
    if (size == 0 || size > memory_size) {
        return NULL;
    }
    void* ptr = memory_pool;
    memory_pool = (char*)memory_pool + size;
    memory_size -= size;
    return ptr;
}

void free(void* ptr) {
    // Memory management is simplistic; this function does not reclaim memory.
}