#include<stdio.h>

int sum(int a,int b){
    return a+b;
}

void main(){
    int a, b;

    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);

    printf("sum of Entered two numbers : %d",sum(a,b));
}