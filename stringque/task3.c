// 3. Write a program in C to separate individual characters from a string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    int length=0;
    printf("\nEnter a string : ");
    scanf("%[^\n]s",str);

    printf("\nSeparated character : ");
    // for (str[length]; str != '\0' ; length++){
    //     printf("%s  ",str[length]);
    // }
    while(str[length]!='\0'){
        printf("%c  ",str[length]);
        length++;
    }
    
    return 0;
}