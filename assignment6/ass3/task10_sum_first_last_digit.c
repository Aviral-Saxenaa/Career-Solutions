#include <stdio.h>

int sumFirstLastDigit(int number) {
    int lastDigit = number % 10;
    int firstDigit = number;

    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    return firstDigit + lastDigit;
}

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Sum of first and last digit = %d\n", sumFirstLastDigit(number));

    return 0;
}
