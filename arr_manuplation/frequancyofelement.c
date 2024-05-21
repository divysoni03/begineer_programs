// #include<stdio.h>

// int sort(int *arr,int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]>=arr[j]){
//                 int temp=arr[i];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
// }

// void main(){
//     int arr[10];
//     int i,j;
//     for(i=0;i<10;i++){
//         printf("Element %d :",i);
//         scanf("%d",&arr[i]);
//     }
//     int size=sizeof(arr)/sizeof(arr[0]);
    

//     printf("\norignal array : ");

//     printf("arr[%d] = { ", size);
//     for(i=0;i<size;i++){
//         printf("%d ,",arr[i]);
//     }
//     printf("\b\b }\n");

//     sort(arr, size);

//     printf("\nsorted array : ");

//     printf("arr[%d] = { ", size);
//     for(i=0;i<size;i++){
//         printf("%d ,",arr[i]);
//     }
//     printf("\b\b }\n");

//     int count=0;

//     for(i=0;i<size;i++){
//         for(j=i;j<size;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         printf("\nNumber %d is repeating %d times.",arr[i],count);
//         for(int k=1;k<count;k++){
//             i++;
//         }
//         count=0;
//     }
//     printf("\n\n");
// }

#include <stdio.h>

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[10];
    int i, j;
    for (i = 0; i < 10; i++) {
        printf("Element %d :", i);
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("\noriginal array : ");
    printf("arr[%d] = { ", size);
    for (i = 0; i < size; i++) {
        printf("%d ,", arr[i]);
    }
    printf("\b\b }\n");

    sort(arr, size);

    printf("\nsorted array : ");
    printf("arr[%d] = { ", size);
    for (i = 0; i < size; i++) {
        printf("%d ,", arr[i]);
    }
    printf("\b\b }\n");

    int count = 1;
    for (i = 0; i < size; i++) {
        count = 1;
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            } else {
                break;
            }
        }
        printf("\nNumber %d is repeating %d times.", arr[i], count);
        i += (count - 1);
    }
    printf("\n\n");
    return 0;
}
