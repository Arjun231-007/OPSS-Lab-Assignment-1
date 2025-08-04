#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int length, i;

    // Prompt the user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    // Print the reversed string
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }

    printf("\n");

    return 0;
}
