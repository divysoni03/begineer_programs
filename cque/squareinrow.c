#include<stdio.h>

void main(){
    int i,j,k,row,n;

    printf("Enter number of rows : ");
    scanf("%d",&n);

    for(row=0;row<n;row++){ //controll lines

        for(k=0;k<n;k++){   //print stars in one line for n times
        
            for(i=0;i<n;i++){   //print star
                printf("*");
            }
            printf("   ");
        }
        printf("\n");
    }
}