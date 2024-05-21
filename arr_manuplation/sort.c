#include<stdio.h>

void sortarr(int *arr){
    int i,j;
    int size=sizeof(arr)/sizeof(arr[0]);

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

    int fullsize= (sizeof(arr1)/sizeof(arr1[0]) + sizeof(arr2)/sizeof(arr2[0]));
    int size1= sizeof(arr1)/sizeof(arr1[0]);
    int size2= sizeof(arr2)/sizeof(arr2[0]);

    int a,i,j,k;
    
    for(i=0;i<size1-1;i++){
        for(j=i+1;j<size1;j++){
            if(arr1[i]>arr1[j]){
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    for(i=0;i<size2-1;i++){
        for(j=i+1;j<size2;j++){
            if(arr2[i]>arr2[j]){
                int temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
    for(a=0;a<size1;a++){
        printf("%d ,",arr1[a]);
    }
    printf("\n\n");
    for(a=0;a<size2;a++){
        printf("%d ,",arr2[a]);
    }

    printf("\n\n");

    for(i=0;i<size1;i++){
        arr3[i]=arr1[i];
    }   
    for(j=size1;j<fullsize;j++){
        arr3[j]=arr2[j];
    }
    for(k=0;k<fullsize;k++){
        printf("%d ,",arr3[k]);
    }
}