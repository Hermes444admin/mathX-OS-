#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filesystem.h"

#define MAX_FILES 100
#define MAX_FILENAME_LENGTH 255

typedef struct {
    char name[MAX_FILENAME_LENGTH];
    char *content;
} File;

static File file_system[MAX_FILES];
static int file_count = 0;

void init_filesystem() {
    file_count = 0;
}

int create_file(const char *filename) {
    if (file_count >= MAX_FILES) {
        return -1; // File system full
    }
    if (strlen(filename) >= MAX_FILENAME_LENGTH) {
        return -2; // Filename too long
    }
    strcpy(file_system[file_count].name, filename);
    file_system[file_count].content = NULL;
    file_count++;
    return 0; // Success
}

int delete_file(const char *filename) {
    for (int i = 0; i < file_count; i++) {
        if (strcmp(file_system[i].name, filename) == 0) {
            free(file_system[i].content);
            file_system[i] = file_system[file_count - 1]; // Move last file to current position
            file_count--;
            return 0; // Success
        }
    }
    return -1; // File not found
}

char* read_file(const char *filename) {
    for (int i = 0; i < file_count; i++) {
        if (strcmp(file_system[i].name, filename) == 0) {
            return file_system[i].content; // Return file content
        }
    }
    return NULL; // File not found
}

int write_file(const char *filename, const char *content) {
    for (int i = 0; i < file_count; i++) {
        if (strcmp(file_system[i].name, filename) == 0) {
            free(file_system[i].content); // Free existing content
            file_system[i].content = strdup(content); // Duplicate new content
            return 0; // Success
        }
    }
    return -1; // File not found
}