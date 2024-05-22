// #include<stdio.h>

// void main(){
//     int i,j,n;

//     //scanning size or number of lines
//     printf("Enter size : ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++){
//           for(j =0; j<=(n-i); j++){
//                 printf("*");
//             }

//             //inner loop for stars
//             for(j =1; j<=i ; j++){
//                printf(" ");
//             }

//             //inner loop for stars
//             for(j =1; j<=i ; j++){
//                 printf(" ");
//             }

//             for(j=0;j<=(n-i);j++){
//                 printf("*");
//             }
//         printf("\n");
//     }

//     for(i=n;i>0;i--){
//         for(j =0; j<=(n-i) ; j++){
//             printf("*");
//         }

//         //inner loop for stars
//         for(j =1; j<=i ; j++){
//             printf(" ");
//         }

//         //inner loop for stars
//         for(j =1; j<=i ; j++){
//             printf(" ");
//         }

//         for(j=0;j<=(n-i);j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
#include <stdio.h>

void main(){
    int i, j, n;

    // Scanning size or number of lines
    printf("Enter size: ");
    scanf("%d", &n);

    // Top half of the pattern
    for(i = 0; i < n; i++){
        // Printing leading stars
        for(j = 0; j < n - i; j++){
            printf("*");
        }
        // Printing spaces
        for(j = 0; j < 2 * i; j++){
            printf(" ");
        }
        // Printing trailing stars
        for(j = 0; j < n - i; j++){
            printf("*");
        }
        printf("\n");
    }

    // Bottom half of the pattern
    for(i = n - 1; i >= 0; i--){
        // Printing leading stars
        for(j = 0; j < n - i; j++){
            printf("*");
        }
        // Printing spaces
        for(j = 0; j < 2 * i; j++){
            printf(" ");
        }
        // Printing trailing stars
        for(j = 0; j < n - i; j++){
            printf("*");
        }
        printf("\n");
    }
}
