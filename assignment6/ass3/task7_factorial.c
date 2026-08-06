#include <stdio.h>

long long factorial(int number) {
    long long result = 1;
    int i;

    for (i = 1; i <= number; i++) {
        result *= i;
    }

    return result;
}

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial = %lld\n", factorial(number));

    return 0;
}
