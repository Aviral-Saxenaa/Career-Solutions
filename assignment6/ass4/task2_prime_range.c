#include <stdio.h>

int isPrime(int number) {
    int i;

    if (number < 2) {
        return 0;
    }

    for (i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}

void printPrimeNumbers(int limit) {
    int i;

    printf("Prime numbers from 1 to %d are:\n", limit);
    for (i = 1; i <= limit; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(void) {
    int limit;

    printf("Enter n: ");
    scanf("%d", &limit);

    printPrimeNumbers(limit);

    return 0;
}
