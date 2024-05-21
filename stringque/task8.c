// 8. Write a program in C to copy one string to another string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[20],str2[20];

    printf("\nEnter a string : ");
    scanf("%[^\n]s",str);

    strcpy(str2,str);
    printf("orignal string : %s\ncopied string : %s",str,str2);
}