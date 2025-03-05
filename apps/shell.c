#include <stdio.h>
#include <string.h>

void execute_command(const char *command) {
    if (strcmp(command, "exit") == 0) {
        printf("Exiting shell...\n");
        return;
    }
    printf("Executing command: %s\n", command);
}

int main() {
    char command[256];

    printf("Welcome to MPL OS Shell\n");
    printf("Type 'exit' to quit.\n");

    while (1) {
        printf("> ");
        fgets(command, sizeof(command), stdin);
        command[strcspn(command, "\n")] = 0; // Remove newline character

        if (strcmp(command, "exit") == 0) {
            execute_command(command);
            break;
        }

        execute_command(command);
    }

    return 0;
}