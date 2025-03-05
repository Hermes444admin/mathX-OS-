#ifndef KERNEL_H
#define KERNEL_H

#include <stdint.h>

// Task structure
typedef struct {
    uint32_t id;
    uint32_t priority;
    void (*task_function)(void);
} Task;

// Function declarations
void initialize_kernel(void);
void schedule_task(void);
void shutdown_kernel(void);
void allocate_memory(uint32_t size);
void free_memory(void* ptr);

#endif // KERNEL_H