#include<stdio.h>

float exps(float x,float y,float z){
    if(y==z)printf("ERROR : The values of denominators are same.");

    return x/(y- z);
}
void main(){
    float x, y, z;

    printf("Enter x :");
    scanf("%f",&x);    
    printf("Enter y :");
    scanf("%f",&y);    
    printf("Enter z :");
    scanf("%f",&z);    

    printf("sum : %.2f",exps(x,y,z));
}