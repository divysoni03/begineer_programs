#include<stdio.h>

void checkPalindrome(int arr[], int size) {
    int i, flag = 0;
    for(i=0; i<size/2; i++) {
        if(arr[i] != arr[size-i-1]) {
            flag = 1;
            break;            
        }
    }

    if(flag) {
        printf("\nArray is not palindrome.");
    } else {
        printf("\nArray is palindrome.");
    }
}

void main(){
    int arr[] ={};
    int size=sizeof(arr)/sizeof(arr[0]);
    checkPalindrome(arr,size);
}