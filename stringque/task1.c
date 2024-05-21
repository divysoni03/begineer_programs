// 1. Write a program in C to input a string and print it.

#include<stdio.h>
#include<string.h>

int main(){
    char string[10];
    printf("\nEnter a string :");
    scanf("%[^\n]s",string);
    printf("%s",string);
    return 0;
}

