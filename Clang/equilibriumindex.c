#include<stdio.h>

void main(){
    int sumofleft[20],sumofright,i;
    int a[]={0,-4,7,-4,-2,6,-3,0};
    int n = sizeof(a)/sizeof(a[0]);

    printf("Your Given array is : ");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        printf(" ");
    }
    printf("\n");

    printf("The equilibrium found at : ");

    sumofleft[0]=0;

    //sum of left size from index 
    for(i=0;i<n;i++){
        sumofleft[i]=sumofleft[i-1]+a[i-1];
    }

    sumofright=0;

    //opposite of left reverse then left sum 
    for(i=n-1;i>=0;i--){
        if(sumofleft[i] == sumofright){
            printf("%d",i);
        }
        sumofright += a[i];
    }
}
