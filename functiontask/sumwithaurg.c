#include<stdio.h>

void sum(int a,int b){
    int sum=a+b;
    printf("Your Entered numbers %d and %d 's sum is %d.\n\n",a,b,sum);
}

void main(){
    int a,b;
    printf("\n\nEnter two numbers : ");
    scanf("%d %d",&a ,&b);

    sum(a,b);
}