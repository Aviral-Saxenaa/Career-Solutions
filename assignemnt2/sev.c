
#include <stdio.h>

int main()
{
    int age;

    // Accept the age from the user
    printf("Enter the age: ");
    scanf("%d", &age);

    // Check the age and print the corresponding category
    if (age >= 60)
    {
        printf("Senior\n");
    }
    else if (age >= 20)
    {
        printf("Adult\n");
    }
    else if (age >= 12)
    {
        printf("Teenager\n");
    }
    else
    {
        printf("Child\n");
    }

    return 0;
}