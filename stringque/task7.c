// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    int alphabets=0,digits=0,special=0;

    printf("\nEnter a string : ");
    scanf("%[^\n]s",str);

    for(int i=0;str[i] !='\0';i++){
        if(str[i]>=48 && str[i]<=57){
            digits++;
        } 
        if(str[i]>='A' && str[i]<='Z'){
            alphabets++;
        }
        if(str[i]>='a' && str[i]<='z'){
           alphabets++; 
        }
        else{
            special++;
        }
    }
    printf("\nNumber of digits : %d\nNumber of alphabets : %d\nNumber of special characters : %d",digits,alphabets,special);
}