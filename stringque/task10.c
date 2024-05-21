// 10. Write a program in C to find the maximum number of characters in a string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    int num_char=0;

    printf("\nEnter a string : ");
    scanf("%s",str);

    for(int i=0;str[i] !='\0';i++){
        if(str[i]>='a' && str[i] <='z'){
            num_char++;
        }
        else if(str[i]>='A' && str[i]<='z'){
            num_char++;
        }
    }
    printf("\nNumber of character : %d",num_char);
    return 0;
}