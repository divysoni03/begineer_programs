#include <stdio.h>

int main() {
    int i, j,k, arr1[10][10], rsum[10], csum[10], n,gsum=0;

    //head line or purpose
    printf("\n\nFind the sum of rows and columns of a Matrix:\n");
    printf("-------------------------------------------\n");

    
    printf("Input the size of the square matrix : ");   //scaningng size of array
    scanf("%d", &n);

   
    printf("Input elements in the matrix :\n"); //scanninng square array size of entered n 
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }


    
    printf("The matrix is :\n");    //printing array
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("% 4d", arr1[i][j]);
        }
        printf("\n");
    }

   
    for (i = 0; i < n; i++) {
        rsum[i] = 0;
        for (j = 0; j < n; j++) {
            rsum[i] = rsum[i] + arr1[i][j]; //sum of rows in one array(rsum)
        }
    }

    
    for (i = 0; i < n; i++) {
        csum[i] = 0;
        for (j = 0; j < n; j++) {
            csum[i] = csum[i] + arr1[j][i]; //sum of cols in one array(csum)
        }
    }

   //now printning array with sums in this loop will print matrix it self and sum of rows
    printf("The sum of rows and columns of the matrix is :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
           printf("% 4d", arr1[i][j]);
        }
        printf("    |");
        printf("% 6d", rsum[i]); 
        printf("\n");
    }

    //calculating grand total
    for(i=0;i<n;i++){
        gsum = gsum + (rsum[i]+csum[i]);
    }
   
    printf("\n"); //printinng sum of cols under the matrix 
    for(j=0;j<n*6;j++){
        printf("_");
    }
    printf("\n");
    for (j = 0; j < n; j++) {
        printf("% 4d", csum[j]); 
    }
    //printing grand total all edge of matrix and sums(rsum & csum)
    printf("% 8d",gsum);
    printf("\n\n");

    return 0;
}
