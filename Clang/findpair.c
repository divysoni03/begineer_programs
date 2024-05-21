#include<stdio.h>

void main(){
    int a[20],i,j,size,s;

    printf("Enter the number to search : ");
    scanf("%d",&s);
    
    printf("Enter size of array : ");
    scanf("%d",&size);

    //scanning array
    for(i=0;i<size;i++){
        printf("Element %d : ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<size;i++){
        printf("%d",a[i]);
        printf(" ");
    }

    printf("\n");
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(a[i]+a[j]==s){
                printf("pair of element of element that can give this sum index is %d and %d",i,j);
                return;
            }
        }   
    }
}