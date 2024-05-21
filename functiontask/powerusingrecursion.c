#include <stdio.h>

int power(int base, int exponent) {

    if (exponent == 0) {
        return 1;
    }
    else {
        return base * power(base, exponent - 1);
    }
}

void main() {
    int base;
    int exponent;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);

    printf("%d raised to the power of %d is %d\n", base, exponent, result);

}
