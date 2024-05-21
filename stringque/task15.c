// 15. Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter your sentence : ");
    fgets(str,sizeof(str),stdin);

    str[strlen(str)]='\0';
    printf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
        else if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    printf("New modified String : %s",str);
    return 0;
}