#include <stdint.h>
#include "keyboard.h"

static uint8_t key_buffer[256];
static int buffer_index = 0;

void init_keyboard() {
    // Initialize keyboard hardware and interrupts
    // This is platform-specific and would typically involve
    // setting up the interrupt descriptor table (IDT) and
    // enabling keyboard interrupts.
}

uint8_t read_key() {
    if (buffer_index > 0) {
        return key_buffer[--buffer_index];
    }
    return 0; // No key pressed
}

void keyboard_interrupt_handler() {
    // This function would be called on a keyboard interrupt
    // Read the key from the hardware and store it in the buffer
    uint8_t key = /* read from keyboard hardware */;
    if (buffer_index < sizeof(key_buffer)) {
        key_buffer[buffer_index++] = key;
    }
}