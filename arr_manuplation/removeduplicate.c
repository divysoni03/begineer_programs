#include<stdio.h>

void removeDuplicate(int *arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                arr[j] = 0;
            }
        }
    }
}

void sortarrey(int *arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void main() {
    int arr[] = {1, 2, 2, 3, 4, 5, 5} ,zero=0;
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("arr[%d] : {", size);    
    for(int i = 0; i < size; i++) {
        printf("%d ,", arr[i]);
    }
    printf("\b\b }\n");

    removeDuplicate(arr, size);
    sortarr(arr, size);

    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zero++;
        }
    }

    printf("arr[%d] : {", size);    
    for(int i = zero; i < size; i++) {
        printf("%d ,", arr[i]);
    }
    printf("\b\b }\n");

    // return 0;
}
