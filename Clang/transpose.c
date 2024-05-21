#include<stdio.h>

void main(){
    int a[20][20],i,j,x;


    printf("Transpose of 2x2 matrix\n--------------------------\n\n");
    //scanning 2x2 array
    printf("Enter 4 elements for 2x2 array : ");
    for(i=0;i<2;i++){   
        for(j=0;j<2;j++){
            printf("Element [%d,%d] =",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    //tranposing array cols=row
    for(i=0;i<2;i++){   //row
        for(j=0;j<1;j++){   //cols
            x=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=x;
        }
    }

    //printing array
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",a[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}