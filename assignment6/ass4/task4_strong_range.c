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

void printStrongNumbers(int limit) {
    int i;

    printf("Strong numbers from 1 to %d are:\n", limit);
    for (i = 1; i <= limit; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(void) {
    int limit;

    printf("Enter n: ");
    scanf("%d", &limit);

    printStrongNumbers(limit);

    return 0;
}
