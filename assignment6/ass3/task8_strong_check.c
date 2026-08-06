#include <stdio.h>

int factorialOfDigit(int digit) {
    int i;
    int result = 1;

    for (i = 1; i <= digit; i++) {
        result *= i;
    }

    return result;
}

int isStrong(int number) {
    int original = number;
    int sum = 0;

    while (number > 0) {
        sum += factorialOfDigit(number % 10);
        number /= 10;
    }

    return sum == original;
}

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isStrong(number)) {
        printf("%d is a strong number.\n", number);
    } else {
        printf("%d is not a strong number.\n", number);
    }

    return 0;
}
