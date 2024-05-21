// 4. Write a program in C to print individual characters of a string in reverse order.

#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    int length=0;
    printf("\nEnter a string :");
    scanf("%[^\n]s",str);

    strrev(str); 
    printf("\nRevered and with indivisual char : ");
    while(str[length] != '\0'){
        printf("%c ",str[length]);
        length++;
    }
    return 0;
}