#include<stdio.h>

void main(){
    int a[10][10],i,j,det=0;  //declaring variables

    //scanning 3x3 matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Element [%d,%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",a[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    //calculating det
    for(i=0;i<3;i++){
            det=det+(a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]));
        
    }
    printf("determinate : %d",det);
}