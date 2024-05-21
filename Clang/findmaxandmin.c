#include<stdio.h>

void main(){
    int a[100];
    int i,j,temp,no;

    printf("Enter how many numbers u want to enter : ");
    scanf("%d",&no);

    //scanning array
    for(i=0;i<no;i++){
        printf("Element %d : ",i);
        scanf("%d",&a[i]);
    }

    //bubble sort 
    for(i=0;i<no;i++){
        for(j=i+1;j<no;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    //printing maximum and minimum numbers
    printf("\nMaximum number in array : %d .",a[0]);
    printf("\nMinimum number in array : %d .",a[no-1]);

}