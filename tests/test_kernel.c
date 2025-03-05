#include <assert.h>
#include <stdio.h>
#include "kernel.h"
#include "memory.h"

void test_initialize_kernel() {
    initialize_kernel();
    // Add assertions to verify kernel initialization
    assert(get_task_count() == 0);
    assert(get_memory_status() == MEMORY_OK);
    printf("test_initialize_kernel passed\n");
}

void test_allocate_memory() {
    initialize_memory();
    void* ptr = allocate(1024);
    assert(ptr != NULL);
    // Add more assertions to verify memory allocation
    printf("test_allocate_memory passed\n");
}

void test_shutdown_kernel() {
    shutdown_kernel();
    // Add assertions to verify kernel shutdown
    assert(get_task_count() == 0);
    assert(get_memory_status() == MEMORY_SHUTDOWN);
    printf("test_shutdown_kernel passed\n");
}

int main() {
    test_initialize_kernel();
    test_allocate_memory();
    test_shutdown_kernel();
    printf("All tests passed\n");
    return 0;
}