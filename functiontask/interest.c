#include<stdio.h>

float intrest(int p,int r,int t){
    return (p*r*t)/100;
}
void main(){
    int p, r, t;

    printf("Enter principle amount : ");
    scanf("%d",&p);
    printf("Enter interest rate : ");
    scanf("%d",&r);
    printf("Enter time : ");
    scanf("%d",&t);

    printf("Interest : %.2f",intrest(p,r,t));
}