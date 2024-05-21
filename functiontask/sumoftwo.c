#include<stdio.h>

void sum(){
    int a,b,result=0;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    result =a+b;
    printf("Sum of entered two numbers : %d",result);
}

void main(){
    sum();
}