// 2. Write a program in C to find the length of a string without using library functions.

#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    int length=0;
    printf("\nEnter a string :");
    scanf("%[^\n]s",&str);
    while(str[length]!= '\0'){
        length++;
        
    }
    printf("Entered string : %s ,\nLength : %d",str,length);
    return 0;
}