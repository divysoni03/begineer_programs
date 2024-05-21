//scanning number of rows and printing triangle(in one row) of stars acoarding to them

#include <stdio.h>

void printdiamond(int i) {
  int row, space, star, n;   
  
    for (row = 1; row <= i; row++) { 
        int mathspace = i - row;  

        int mathstar = (2 * row) - 1; 
        for (n = 1; n <= i; n++) {  

            for (space = 1; space <= mathspace; space++) {
                printf("  ");
            }

            for (star = 1; star <= mathstar; star++){
                printf("* ");

            }
      
            for (space = 1; space <= mathspace; space++) {
                printf("  ");
            }

        }
        printf("\n");
    }

    for (row = i; row >= 1; row--) { 
        int mathspace = i - row;  

        int mathstar = (2 * row) - 1; 
        for (n = 0; n < i; n++) {  

            for (space = mathspace; space >= 1; space--) {
                printf("  ");
            }

            for (star = mathstar; star >= 1; star--){
                printf("* ");

            }
      
            for (space = mathspace; space >= 1; space--) {
                printf("  ");
            }

        }
        printf("\n");
    }
}

int main() {
  int i;
  printf("Enter how many triangles u want to print : ");
  scanf("%d", &i);
  
  if (i <= 0 || i >= 100) {
        printf("Invalid input");
        return 0;
    
  }
  printdiamond(i);
  return 0;
}