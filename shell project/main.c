#include "main.h"

int main(int ac, char **argv) {
    char input[256]; // Adjust the buffer size as needed

    /* Declare unused variables to avoid compiler warnings */
    (void)ac;
    (void)argv;

    printf("(shellproject) $ ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        printf("You entered: %s", input);
    } else {
        printf("Failed to read input.\n");
    }

    return 0;
}


