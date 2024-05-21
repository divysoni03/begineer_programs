//scanning number of rows and printing triangle(in one row) of stars acoarding to them

#include <stdio.h>

void printPyramids(int i) {
  int row, space, star, n;   //declaring needed variables
  
  for (row = 1; row <= i; row++) {  //this loop go line by line 

    for (n = 0; n < i; n++) {   //this loop controles how many triangles to print acoding to entered value of 'i'

      int mathspace = i - row;  //this calculates how many spaces to be print before and after triangle(acording to rows value)

      int mathstar = (2 * row) - 1;  //this calculates the stars to be print in triangle

      // print spaces
      for (space = 1; space <= mathspace; space++) {
        printf("  ");
      }

      // print hashtag
      for (star = 1; star <= mathstar; star++){
        printf("* ");

      }
      
      //Instead of printing new line, separate the next stride by mathspace spaces
      for (space = 1; space <= mathspace; space++) {
        printf("  ");
      }

      /*the aboves loop 
        prints spaces after printing stars of triangle
        -----*-----|-----
        ----***----|----
        ---*****---|---
        --*******--|--
        -*********-|-

        as we can se above after printing the stars of triangle the spaces(here '-')
        left side of the '|' are the spaces that make it semetrical.
      */

    }
    printf("\n");
  }
}

int main() {
  int i;
  printf("Enter how many triangles u want to print : ");
  scanf("%d", &i);

  //checking if 'i' is not big  
  if (i <= 0 || i >= 100) {
        printf("Invalid input");
        return 0;
    
  }
  
  //calling function by argument of 'i'
  printPyramids(i);
  return 0;
}