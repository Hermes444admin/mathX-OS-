#include <stdio.h>
#include "kernel.h"
#include "memory.h"

void initialize_kernel() {
    printf("Initializing kernel...\n");
    initialize_memory();
}

int schedule_task() {
    // Placeholder for task scheduling logic
    printf("Scheduling task...\n");
    return 0; // Return task ID
}

void* allocate_memory(size_t size) {
    return allocate(size);
}

void shutdown_kernel() {
    printf("Shutting down kernel...\n");
    // Perform cleanup tasks here
}

int main() {
    initialize_kernel();
    int task_id = schedule_task();
    printf("Scheduled task ID: %d\n", task_id);
    shutdown_kernel();
    return 0;
}