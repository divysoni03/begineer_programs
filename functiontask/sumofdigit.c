#include <stdio.h>

int sumOfDigits(int num) {
    if (num < 10) {
        return num;
    } else {
        return num % 10 + sumOfDigits(num / 10);
    }
}

void main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // int result = sumOfDigits(number);

    // Output: Display the result
    printf("Sum of digits of %d is %d\n", number, sumOfDigits(number));

}
