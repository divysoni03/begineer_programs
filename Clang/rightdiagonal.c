#include<stdio.h>

void main(){
    int a[20][20],i,j,size,sum=0;

    printf("Sum of right diagonal of a matrix\n----------------------\n\n");

    //scanning size of square matrix
    printf("Enter size of matrix : ");
    scanf("%d",&size);

    //scanning square matrix
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("Element [%d,%d] :",i,j);
            scanf("%d",&a[i][j]);
            if(i==j){
                sum+=a[i][j];
            }
        }
    }

    //printing entered array
    printf("Your Entered martix : \n");
     for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d",a[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    //printing right diagonal's sum
    printf("Right diagonal sum : %d",sum);
}