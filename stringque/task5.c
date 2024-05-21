// 5. Write a program in C to count the total number of words in a string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    int length =0,twords=0;

    printf("\nEnter a string : ");
    scanf("%[^\n]s",str);

    while(str[length] != '\0'){
        if(str[length] != ' '){
            twords++;
        }
        length++;
    }    
    printf("Entered string : %s ,\nTotal words : %d",str,twords);
    return 0;
}