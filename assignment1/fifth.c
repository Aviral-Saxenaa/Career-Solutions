#include <stdio.h>

int main()
{

    printf("enter the age!\n");
    int age;
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("eligible to vote\n");
    }
    else
    {
        printf("not eligible to vote\n");
    }
}