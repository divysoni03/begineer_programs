/*  PATTERN -1

*000*000*
0*00*00*0
00*0*0*00
000***000
0000*0000

CODE FOR THIS PATTERN IS GIVEN BELOWE
*/

#include<stdio.h>

void main(){
    int i,j;

    int row, col;

    printf("Enter number of rows : ");
    scanf("%d",&row);

    if((row%2)==0){
        row=(row+1);
    }
    
    int b1=0,b2=row+3;

    for(i=0;i<row;i++){

        for(j=0;j<row+4;j++){
            if(j==b1 || j==(row+4)/2 || j==b2){
                printf("*");
            }
            else{
                printf("0");
            }
        }
        b1++;
        b2--;
        printf("\n");
    }
}