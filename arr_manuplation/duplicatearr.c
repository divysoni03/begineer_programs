#include<stdio.h>

int removeduplicate(int arr[], int size){
    if(size==0 || size==1) return size;
    
    int temp[size];
    int k=0;

    for(int i=0;i<size;i++){
        for(int j=0;j<i;j++){
            if(arr[i]!=arr[i+1]){ 
                temp[k++]=arr[i];
                break;
            }
        }
       
    }

    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
    return k;
}

void main(){
    int arr[]={1,2,2,3,4,4,5,5,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("arr[%d] : {",size);
    for(int i=0;i<size;i++){
        printf("%d ,",arr[i]);
    }
    printf("\b\b }\n");

    int newsize=removeduplicate(arr,size);

    printf("arr[%d] : {",newsize);
    for(int i=0;i<newsize;i++){
        printf("%d ,",arr[i]);
    }
    printf("\b\b }\n");
}