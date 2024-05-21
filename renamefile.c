#include<stdio.h>

int main(){
    int value = rename("renamefile.c", "namechanged.c");\
    if(!value){
        printf("File name changed succesfully!!!");
    }
    else{
        printf("ERROR!");
    }
    return 0;
}