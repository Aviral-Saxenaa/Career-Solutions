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

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
