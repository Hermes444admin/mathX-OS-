section .text
global _start

_start:
    ; Set up the stack
    cli                     ; Disable interrupts
    mov ax, 0x7C0          ; Load the boot sector address
    mov ds, ax             ; Set DS to the boot sector
    mov es, ax             ; Set ES to the boot sector
    mov ss, ax             ; Set SS to the boot sector
    mov sp, 0x7C00         ; Set stack pointer

    ; Call the kernel main function
    call kernel_main

    ; Hang the system
hang:
    jmp hang

section .bss
    resb 512               ; Reserve 512 bytes for the boot sector buffer