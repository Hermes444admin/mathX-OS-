#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <stdint.h>

#define MAX_FILENAME_LENGTH 255
#define MAX_FILES 1024

typedef struct {
    char name[MAX_FILENAME_LENGTH];
    uint32_t size;
    uint32_t block_start;
} File;

typedef struct {
    File files[MAX_FILES];
    uint32_t file_count;
} FileSystem;

void init_filesystem(FileSystem *fs);
int create_file(FileSystem *fs, const char *filename, uint32_t size);
int delete_file(FileSystem *fs, const char *filename);
int read_file(FileSystem *fs, const char *filename, void *buffer, uint32_t size);
int write_file(FileSystem *fs, const char *filename, const void *data, uint32_t size);

#endif // FILESYSTEM_H