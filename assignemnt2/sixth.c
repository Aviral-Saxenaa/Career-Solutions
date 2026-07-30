

#include <stdio.h>

int main()
{
    int number;

    // Accept a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check divisibility by 3 and 5
    if (number % 3 == 0 && number % 5 == 0)
    {
        printf("Divisible by both\n");
    }
    else if (number % 3 == 0)
    {
        printf("Divisible by 3 but not by 5\n");
    }
    else if (number % 5 == 0)
    {
        printf("Divisible by 5 but not by 3\n");
    }
    else
    {
        printf("Divisible by None\n");
    }

    return 0;
}