#include <stdio.h>

void checkDivisibility(int *number)
{
    if (*number % 3 == 0 && *number % 5 == 0) {
        printf("Divisible by both\n");
    } else if (*number % 3 == 0) {
        printf("Divisible by 3 but not by 5\n");
    } else if (*number % 5 == 0) {
        printf("Divisible by 5 but not by 3\n");
    } else {
        printf("Divisible by none\n");
    }
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkDivisibility(&number);

    return 0;
}
