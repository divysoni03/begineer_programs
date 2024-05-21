#include<stdio.h>

float avarage(float a,float b){
    return a+b/2;
}

void main(){
    float a,b;
    printf("Enter two numbers : ");
    scanf("%f %f",&a,&b);

    printf("Avarage of two Entered number is : %.2f",avarage(a,b));
}