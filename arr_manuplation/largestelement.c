#include<stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[]={ 1,2,3,4,5,7,8,12};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Largest element in the array is : %d.",findMax(arr,size));
}