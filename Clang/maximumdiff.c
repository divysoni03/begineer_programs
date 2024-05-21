#include<stdio.h>

void main(){
    int i,j,maxdiff,size;

    //declaring array
    int a[]={7,5,8,2,3,2,4,2,1,0};
    size= sizeof(a)/sizeof(a[0]);

    printf("Given array is : ");
    for(i=0;i<size;i++){
        printf("%d",a[i]);
        printf(" ");
    }
    printf("\n\n");

    maxdiff=-1;
    //finding diff using loop
    for(i=0;i<size;i++){
        for(j=size-1;j>i;j--){

            if(a[j]>a[i]&& maxdiff<(j-i)){
                printf("i=%d, j=%d, a[i] =%d a[j] =%d difference %d\n",i,j,a[i],a[j],j-i);
                maxdiff=j-i;
            }
        }
    }

    printf("\nThe maximum difference between two positive of array indiced is : %d",maxdiff);
}