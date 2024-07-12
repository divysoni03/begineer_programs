#include<stdio.h>

int main(){
    int a=0,b=1,size;
    printf("Enter range to be printed :");
    scanf("%d",&size);
    printf("%d, %d, ",a,b);
    for(int i=2;i<size;i++){
        int c = a+b;
        printf("%d, ",c);
        a = b;
        b = c;
    }
    return 0;
}