# Architecture of MPL OS

MPL OS is designed with a modular architecture that separates its core functionalities into distinct components. This document outlines the key components and their interactions within the system.

## 1. Kernel

The kernel is the heart of MPL OS, responsible for managing system resources and facilitating communication between hardware and software. It includes:

- **Task Scheduling**: Implements a priority-based scheduling algorithm to manage multiple tasks efficiently.
- **Memory Management**: Handles dynamic memory allocation and deallocation, ensuring optimal use of system memory.

### Key Functions:
- `initialize_kernel()`: Sets up the kernel environment.
- `schedule_task()`: Determines which task to execute next based on priority.
- `allocate_memory()`: Allocates memory blocks for tasks.

## 2. Drivers

MPL OS includes several drivers that interface with hardware components:

- **Keyboard Driver**: Captures and processes input from the keyboard.
- **Screen Driver**: Manages output to the display, allowing for text and graphics rendering.
- **Disk Driver**: Handles read and write operations to disk storage.

### Key Functions:
- `init_keyboard()`: Initializes the keyboard hardware.
- `print_to_screen()`: Outputs text to the display.
- `read_disk()`: Reads data from disk storage.

## 3. File System

The file system component manages data storage and retrieval, providing an interface for file operations:

- **File Management**: Supports creating, deleting, reading, and writing files.
- **Directory Management**: Organizes files into directories for easier navigation.

### Key Functions:
- `init_filesystem()`: Initializes the file system structure.
- `create_file()`: Creates a new file in the file system.
- `read_file()`: Retrieves data from a specified file.

## 4. Libraries

MPL OS includes utility libraries that provide common functions used throughout the system:

- **String Library**: Implements functions for string manipulation.
- **Math Library**: Provides basic arithmetic operations.

### Key Functions:
- `string_length()`: Returns the length of a given string.
- `add()`: Performs addition of two numbers.

## 5. Applications

MPL OS supports user applications, with a simple shell application that allows users to interact with the operating system:

- **Shell Application**: Provides a command-line interface for executing commands.

### Key Functions:
- `execute_command()`: Processes user commands and executes the corresponding functions.

## 6. Build System

The build system is responsible for compiling the various components of MPL OS into a cohesive operating system image. It utilizes a Makefile and a build script to automate the build process.

### Key Components:
- **Makefile**: Defines build rules and dependencies for the project.
- **Build Script**: Automates the process of creating the OS image.

## Conclusion

The architecture of MPL OS is designed to be modular and extensible, allowing for easy integration of new features and components. Each module is responsible for a specific aspect of the operating system, promoting maintainability and scalability.