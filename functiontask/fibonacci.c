#include <stdio.h>

int fibonacci(int i) {
    if (i <= 1) {
        return i;
    } else {
        return fibonacci(i - 1) + fibonacci(i - 2);
    }
}


void printFibonacciSequence(int n) {

    printf("Fibonacci Sequence up to %d:\n", n);

    for (int i = 0; i<= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}


void main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printFibonacciSequence(n);

}
