#include<stdio.h>

void main(){
    int a[20],i,j,k,no,count=0;

    printf("printing all the unique numbers from entered array");
    printf("\n----------------------------------------------------");

    printf("\nEnter how many numbers u want to enter : ");
    scanf("%d",&no);

    printf("\nInput %d numbers in the array : \n",no);
    for(i=0;i<no;i++){
        printf("Element %d : ",i);
        scanf("%d",&a[i]);
    }

    printf("The unique numbers in the array are : ");
    for(i=0;i<no;i++){
        count=0;
        for(j=0,k=no;j<k+1;j++){    
            if(i != j){
                if(a[i]==a[j]){
                    count++;
                }
            }
           
        }
        if(count==0){
          printf("%d",a[i]);
        }
    }

    printf("\n\n");

}