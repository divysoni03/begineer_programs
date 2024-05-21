#include<stdio.h>

void main(){

    int i, j, k, lines;

    printf("\nEnter number of lines : ");
    scanf("%d",&lines);

    for(i=1;i<lines;i++){

        //first-half
        for(j=1;j<=lines/2;j++){
            if(i==j){ printf("%d ", j); }
            else if(i>(lines/2) && j==lines-i){ printf("%d ", j);}
            else{ printf("  ");}
        }

        //second-half
        for(j-=2;j>0;j--){
            if(i==j){ printf("%d ", j);}
            else if(i>(lines/2) && j==lines-i){ printf("%d ", j);}
            else{ printf("  ");}
        }
        printf("\n");
    }
}
