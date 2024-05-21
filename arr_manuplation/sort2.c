#include<stdio.h>

void sortarr(int *arr, int size){
    int i,j;

    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
}

int main(){
    int arr1[]={5,4,3,2,1};
    int arr2[]={10,9,8,7,6};
    int arr3[20];

    int size1= sizeof(arr1)/sizeof(arr1[0]);
    int size2= sizeof(arr2)/sizeof(arr2[0]);

    sortarr(arr1, size1);
    sortarr(arr2, size2);

    int fullsize= size1 + size2;
    int i,j,k;
    printf("\n\n");
    
    
    printf("Sorted arr1: ");
    for(i=0;i<size1;i++){
        printf("%d ,",arr1[i]);
    }
    printf("\n");

    printf("Sorted arr2: ");
    for(i=0;i<size2;i++){
        printf("%d ,",arr2[i]);
    }
    printf("\n");

    
    for(i=0;i<size1;i++){
        arr3[i]=arr1[i];
    }   
    for(j=0;j<size2;j++){ 
        arr3[size1+j]=arr2[j]; 
    }

    sortarr(arr3, fullsize);

    printf("Merged and Sorted arr3: ");
    for(k=0;k<fullsize;k++){
        printf("%d ,",arr3[k]);
    }
    printf("\n");

    return 0;
}