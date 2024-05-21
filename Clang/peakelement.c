#include<stdio.h>

void main(){
    int a[20];
    int i,j,peak,size;

    //header
    printf("\n\nFinding peak element in the array and printing them : ");
    printf("\n-------------------------------------------------------\n\n");

    //scanning size
    printf("Enter size of array : ");
    scanf("%d",&size);

    //scanning array as per size
    for(i=0;i<size;i++){
        printf("Element %d : ",i);
        scanf("%d",&a[i]);
    }

    //printing array
    printf("Your entered array is : ");
    for(i=0;i<size;i++){
        printf(" %d",a[i]);
    }
    printf("\n");
    for(i=0;i<size;i++){
        if((a[i]>a[i-1])&&(a[i]>a[i+1])){
            printf("peak element : %d\n",a[i]);
        }
        else if((a[i]>a[i-2])&&(a[i]>a[i+2])){
            printf("peak element : %d\n",a[i]);
        }
    }
}