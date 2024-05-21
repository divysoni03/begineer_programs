#include<stdio.h>

void main(){
    int a[100],b[100],c[200];
    int i,j,no1,no2,no3;

    printf("Merging two arrays ");
    printf("\n-----------------------------\n");

    printf("Enter your first array's limit : ");
    scanf("%d",&no1);
    //scanning first array
    for(i=0;i<no1;i++){
        printf("Element %d : ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter your second array's limit : ");
    scanf("%d",&no2);
    //scannning second array
    for(i=0;i<no2;i++){
        printf("Element %d : ",i);
        scanf("%d",&b[i]);
    }

    //limit of third merged array 
    no3=no1+no2;

    //third array
    for(i=0;i<no1;i++){
        c[i]=a[i];
    }
    for(j=0;j<no2;j++){
        c[i]=b[j];
        i++;
    }

    //printing third array 
    for(i=0;i<no3;i++){ 
        printf("%d",c[i]);
        printf(" ");
    }
}