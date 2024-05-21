#include<stdio.h>

void main(){
    int i,k,row,n;

    printf("Enter number of rows : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){ //controll lines
        for(i=1;i<=n;i++){
            for(k=1;k<=n;k++){   //print stars in one line for n times
                if(row==1||row==n||k==1||k==n){
                    printf("*");
                }
                else{
                    printf(" ");
                }
                printf("   ");
            }
        }
        printf("\n");
    }
}