#include <stdio.h>

int isPerfect(int number) {
    int i;
    int sum = 0;

    for (i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum == number;
}

void printPerfectNumbers(int limit) {
    int i;

    printf("Perfect numbers from 1 to %d are:\n", limit);
    for (i = 1; i <= limit; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(void) {
    int limit;

    printf("Enter n: ");
    scanf("%d", &limit);

    printPerfectNumbers(limit);

    return 0;
}
