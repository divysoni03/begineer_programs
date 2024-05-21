// 19. Write a program in C to combine two strings manually.

#include<stdio.h>
#include<string.h>

int main(){
    char str1[20],str2[20],str3[40] = "\0";
    int len;

    printf("\nEnter a string : ");
    scanf("%[^\n]",str1);
    fflush(stdin);
    printf("\nEnter second string : ");
    scanf("%[^\n]",str2);

    // str1[strlen(str1)] = '\0';
    // str2[strlen(str2)] = '\0';
    
    len=0;
    for(int i=0;i<strlen(str1);i++){
        str3[len++] = str1[i];
    }
    for(int i=0;i<strlen(str2);i++){
        str3[len++] = str2[i]; 
    }
    
    // str3[strlen(str3)] = '\0';

    printf("%s %s %s",str1,str2,str3);
    return 0;
}