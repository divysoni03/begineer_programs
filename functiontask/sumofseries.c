#include<stdio.h>

int factorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
    
}

void main(){
    int num=5,sum=0;

    for(int i=1;i<=5;i++){
        sum=sum+factorial(i)/i;
    }

    printf("Sum of the series is : %d",sum);
}