#include<stdio.h>

void main(){
        //declaring variables
    int main[100],odd[50],even[50],i=0,j=0,k=0,no;

    printf("Enter how many number u want to enter :");
    scanf("%d",&no);

    //scanning main array by loop
    for(i=0;i<no;i++){  
        printf("Element %d : ",i);
        scanf("%d",&main[i]);
    }

    //storing odd and even values from main to diffrent arrays
    for(i=0;i<no;i++){
        if(main[i]%2==0){
            even[j]=main[i];
            j++;
        }
        else{
            odd[k]=main[i];
            k++;
        }
    }

    printf("\n\n");

    //printing main array
    printf("Entered array : ");
    for(i=0;i<no;i++){
        printf("%d",main[i]);
        printf(" ");
    }

    printf("\n\n");

    //printing even array
    printf("Even numbers from main array : ");
    for(i=0;i<j;i++){
        printf("%d",even[i]);
        printf(" ");
    }

    printf("\n\n");

    //printing odd array
    printf("Odd numbers from main array : ");
    for(i=0;i<k;i++){
        printf("%d",odd[i]);
        printf(" ");
    }    
}