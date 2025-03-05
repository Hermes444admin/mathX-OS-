# MPL OS

MPL OS is a modular operating system designed to provide a robust and efficient environment for running applications. It is built with a focus on performance, scalability, and ease of use. Below are the key features and components of MPL OS:

## Features

- **Kernel**: The core of the operating system, responsible for task scheduling, memory management, and system calls.
- **Memory Management**: Efficient allocation and deallocation of memory, ensuring optimal resource usage.
- **Drivers**: Support for various hardware components, including keyboard, screen, and disk operations.
- **File System**: A simple yet effective file system for managing files and directories.
- **Library Functions**: A collection of utility functions for string manipulation and mathematical operations.
- **Applications**: Includes a simple shell application for user interaction and command execution.
- **Build System**: A Makefile and build script to streamline the compilation and image creation process.
- **Documentation**: Comprehensive documentation outlining the architecture and design principles of MPL OS.

## Components

- **Kernel**: Located in the `kernel` directory, it includes:
  - `src/boot.asm`: Assembly code for booting the OS.
  - `src/kernel.c`: Implements core kernel functionality.
  - `src/memory.c`: Handles memory management.
  - `include/kernel.h`: Declarations for kernel functions and structures.
  - `include/memory.h`: Declarations for memory management functions.

- **Drivers**: Located in the `drivers` directory, it includes:
  - `keyboard.c`: Keyboard driver implementation.
  - `screen.c`: Screen driver implementation.
  - `disk.c`: Disk driver implementation.

- **File System**: Located in the `fs` directory, it includes:
  - `filesystem.c`: Implements file system functionality.
  - `filesystem.h`: Declarations for file system functions.

- **Libraries**: Located in the `lib` directory, it includes:
  - `string.c`: String manipulation functions.
  - `math.c`: Mathematical functions.
  - `common.h`: Common utility functions and constants.

- **Applications**: Located in the `apps` directory, it includes:
  - `shell.c`: A simple shell application for user interaction.

- **Build System**: 
  - `build/Makefile`: Build rules and targets for the project.
  - `tools/build_image.sh`: Script for building the OS image.

- **Documentation**: 
  - `docs/architecture.md`: Documentation of the MPL OS architecture.
  
- **Tests**: 
  - `tests/test_kernel.c`: Unit tests for kernel functionality.

## Getting Started

To build and run MPL OS, follow these steps:

1. Clone the repository.
2. Navigate to the project directory.
3. Run the build script or use the Makefile to compile the project.
4. Execute the generated OS image.

## Contributing

Contributions to MPL OS are welcome! Please submit a pull request or open an issue for any enhancements or bug fixes.

## License

This project is licensed under the MIT License. See the LICENSE file for details.