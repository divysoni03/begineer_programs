#include<stdio.h>

void main(){
    int arr[10],i,even[10],odd[10],even1=0,odd1=0;

    printf("Enter 10 Elements in the array : \n");
    for (i=0;i<10;i++)
    {
        printf("Element %d : ",i);
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<10;i++){
        if((arr[i]%2)==0){
            even[even1]=arr[i];
            even1++;
        }
        else{
            odd[odd1]=arr[i];
            odd1++;
        }
    }

    printf("\nOrignal array : ");
    for(i=0;i<10;i++){
        printf("%d, ",arr[i]);
    }
    
    printf("\n\nEven numbers in array : ");
    for (i=0;i<even1;i++)
    {
        printf("%d, ",even[i]);
    }

    printf("\n\nOdd numbers in array : ");
    for(i=0;i<odd1;i++){
        printf("%d, ",odd[i]);
    }

}
