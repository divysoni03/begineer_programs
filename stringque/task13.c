// 13. Write a program in C to extract a substring from a given string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[20],substr[20];
    int start,end,len=0;
    printf("\nEnter a string : ");
    fgets(str,20,stdin);

    printf("\nYour Entered string : %s\nNow Enter index of beginning and end of sub-string : ",str);
    scanf("%d %d",&start,&end);

    for(int i=start;i<=end;i++){
        substr[len++]=str[i];
    }
    substr[len]='\0';

    printf("\nEntered string : %s,\nSub-string : %s",str,substr);
    
    return 0;
}
