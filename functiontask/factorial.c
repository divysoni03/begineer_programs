#include<stdio.h>

void factorial(){
    int n,i=1,fac=1;

    printf("\n\nEnter number to get factorial : ");
    scanf("%d",&n);

    while(i<=n){
        fac*=i;
        i++;
    }
    printf("\nfactorial of Entered number is %d.\n\n",fac);
}

void main(){
    factorial();
}