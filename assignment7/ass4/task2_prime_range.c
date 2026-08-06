#include <stdio.h>

int isPrime(int num)
{
    int i;

    if (num < 2)
        return 0;

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

void printPrime(int *n)
{
    int i;

    printf("Prime numbers are:\n");

    for (i = 2; i <= *n; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
}

int main()
{
    int n;

    printf("Enter limit: ");
    scanf("%d", &n);

    printPrime(&n);

    return 0;
}
