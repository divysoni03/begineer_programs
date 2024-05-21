#include<stdio.h>

int reverse(int *arr){

    int start=0,end=9;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("Array[10] = { ");
    for(int i=0;i<10;i++) printf("%d ,",arr[i]);
    printf("\b\b }\n");
}

int main(){
    int arr[10];

    printf("Enter 10 numbers : ");
    for(int i=0;i<10;i++) scanf("%d",&arr[i]);

    reverse(arr);
}