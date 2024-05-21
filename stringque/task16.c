//16. Write a program in C to find the number of times a given word 'the' appears in the given string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char word[] = "the";
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0'; //changes what we write simply exchanges 


    // Tokenize the string
    char *token = strtok(str, " ");
    while (token != NULL) {
        // Compare token with the word "the"
        if (strcmp(token, word) == 0) {
            count++;
        }
        token = strtok(NULL, " ");
    }

    printf("The word 'the' appears %d times in the given string.\n", count);

    return 0;
}
