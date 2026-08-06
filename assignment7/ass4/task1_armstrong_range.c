#include <stdio.h>

int isArmstrong(int num)
{
    int original = num;
    int temp = num;
    int digits = 0;
    int sum = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp > 0) {
        int rem = temp % 10;
        int power = 1;
        int i;

        for (i = 1; i <= digits; i++) {
            power *= rem;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        return 1;
    else
        return 0;
}

void printArmstrong(int *n)
{
    int i;

    printf("Armstrong numbers are:\n");

    for (i = 1; i <= *n; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
}

int main()
{
    int n;

    printf("Enter limit: ");
    scanf("%d", &n);

    printArmstrong(&n);

    return 0;
}
