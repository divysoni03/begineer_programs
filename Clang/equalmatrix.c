#include<stdio.h>

void main(){
    int a[20][20],b[20][20],size,i,j,yn;

    //scanning first array
    printf("Enter first array's element\n-----------------\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Element [%d,%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (a[i][j] != 1 && a[j][i] != 0) {
                yn = 0;
                break;
            }
        }
    }
   
    if(yn == 1) {
        printf(" The matrix is an identity matrix.\n\n");
    } else {
        printf(" The matrix is not an identity matrix.\n\n");
    }
  
}