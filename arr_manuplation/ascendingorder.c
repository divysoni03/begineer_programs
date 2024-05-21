#include<stdio.h>

void sortarrey(int *arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Orignal arr[%d] : {",size);
    for(int i=0;i<size;i++) printf("%d ,",arr[i]);
    printf("\b\b }\n");

    sortarrey(arr,size);

    printf("Sorted arr[%d] : {",size);
    for(int i=0;i<size;i++) printf("%d ,",arr[i]);
    printf("\b\b }\n");
}