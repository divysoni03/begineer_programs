#include<stdio.h>

int sum(int *arr){
    int sum=0;
    int size = sizeof(arr)+sizeof(arr[0]);
    for (int i=0;i<size;i++) sum+=arr[i];
    return sum;
    
}

void main(){
    int arr[] ={1 ,2 ,3 ,4 ,5 ,6 ,7 ,8};

    printf("Sum of element in the array : %d",sum(arr));
    
}