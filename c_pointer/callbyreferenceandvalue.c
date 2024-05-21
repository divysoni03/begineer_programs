#include <stdio.h>

//call by value : 

/*
void swap(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
}

int main() {
  int a = 10;
  int b = 20;

  printf("Before swap: a = %d, b = %d\n", a, b);
  swap(a, b);
  printf("After swap: a = %d, b = %d\n", a, b);

  return 0;
}

output : 
Before swap: a = 10, b = 20
After swap: a = 10, b = 20
*/

//call by reference : 

/*
#include <stdio.h>

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a = 10;
  int b = 20;

  printf("Before swap: a = %d, b = %d\n", a, b);
  swap(&a, &b);
  printf("After swap: a = %d, b = %d\n", a, b);

  return 0;
}

output : 
Before swap: a = 10, b = 20
After swap: a = 20, b = 10

*/