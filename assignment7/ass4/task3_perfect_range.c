#include <stdio.h>

int isPerfect(int num)
{
    int i;
    int sum = 0;

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == num)
        return 1;
    else
        return 0;
}

void printPerfect(int *n)
{
    int i;

    printf("Perfect numbers are:\n");

    for (i = 1; i <= *n; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
}

int main()
{
    int n;

    printf("Enter limit: ");
    scanf("%d", &n);

    printPerfect(&n);

    return 0;
}
