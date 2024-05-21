#include<stdio.h>
void main(){
    int a[20][20],i,j,ctr=0,size;


    printf("Enter size of array\n---------------\n\n");
    scanf("%d",&size);

    //scanning array
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("Element [%d,%d] :",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]==0){
                ctr++;
            }
        }
    }

    //printting array 
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
           printf("%d",a[i][j]);
           printf(" ");
        }
        printf("\n");
    }

    if(ctr>((size*size)/2)){
        printf("Your entered array is spare array.");
    }
    else{
        printf("Your entered array is not spare array.");
    }

    printf("There are %d zeros in your entered matrix.",ctr);

}