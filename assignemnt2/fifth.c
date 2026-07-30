// 5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
// is a student and he has purchased more than 500 than discount is 20% otherwise
// discount is 10%.But if he is not a student then if he has purchased more than 600
// discount is 15% otherwise there is not discount.

#include <stdio.h>

int main()
{
    float price, discount = 0.0;
    char isStudent;

    // Accept the price from user
    printf("Enter the price: ");
    scanf("%f", &price);

    // Ask the user if he is a student
    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent);

    // Calculate discount based on the conditions
    if (isStudent == 'y')
    {
        if (price > 500)
        {
            discount = 0.20 * price; // 20% discount
        }
        else
        {
            discount = 0.10 * price; // 10% discount
        }
    }
    else
    {
        if (price > 600)
        {
            discount = 0.15 * price; // 15% discount
        }
        else
        {
            discount = 0.0; // No discount
        }
    }

    // Calculate final price after discount
    float finalPrice = price - discount;

    // Show the final price after discount
    printf("Final price after discount: %f\n", finalPrice);

    return 0;
}