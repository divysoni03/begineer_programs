// 14. Write a C program to check whether a substring is present in a string.
#include <stdio.h>
#include <string.h>

int isSubstring(char string[], char substring[]) {
    int i, j, found;

    for (i = 0; string[i] != '\0'; i++) {
        found = 1;
        for (j = 0; substring[j] != '\0'; j++) {
            if(string[i+j] != substring[j]) {
                found = 0;
                break;
            }
        }
        if(found) return 1;
    }
    return 0;
}

int main() {
    char string[100], substring[100];

    printf("\nEnter the string: ");
    gets(string);

    printf("\nEnter the substring: ");
    gets(substring);

    // if(strstr(string, substring) != NULL) {
    if(isSubstring(string, substring)) {
        printf("\n'%s' is present in '%s'", substring, string);
    } else {
        printf("\n'%s' is not present in '%s'", substring, string);
    }
    
    return 0;
}
