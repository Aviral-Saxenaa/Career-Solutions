#include <stdio.h>

int powerInt(int base, int exponent) {
    int result = 1;
    int i;

    for (i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int isArmstrong(int number) {
    int original = number;
    int digits = 0;
    int sum = 0;
    int temp = number;

    if (number == 0) {
        return 1;
    }

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = number;
    while (temp > 0) {
        sum += powerInt(temp % 10, digits);
        temp /= 10;
    }

    return sum == original;
}

void printArmstrongNumbers(int limit) {
    int i;

    printf("Armstrong numbers from 1 to %d are:\n", limit);
    for (i = 1; i <= limit; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(void) {
    int limit;

    printf("Enter n: ");
    scanf("%d", &limit);

    printArmstrongNumbers(limit);

    return 0;
}
