#include <stdio.h>

float getFinalPrice(float price, char isStudent)
{
    float discount = 0;

    if (isStudent == 'y' || isStudent == 'Y')
    {
        if (price > 500)
            discount = 0.20;
        else
            discount = 0.10;
    }
    else
    {
        if (price > 600)
            discount = 0.15;
    }

    return price - (price * discount);
}

int main()
{
    float price;
    char isStudent;

    printf("Enter purchase amount: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent);

    printf("Final Price = %.2f\n", getFinalPrice(price, isStudent));

    return 0;
}