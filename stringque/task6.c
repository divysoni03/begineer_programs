// 6. Write a program in C to compare two strings without using string library functions.

#include<stdio.h>
#include<string.h>

int main(){
    char str1[20],str2[20];
    int length=0;
    
    printf("\nEnter two strings to compare :");
    scanf("%[^\n]s",str1);
    scanf(" %[^\n]s",str2);

    if (!strcmp(str1, str2)) printf("Both string are equal.");
    else printf("Both strings are not same.");

    return 0;
}