// 1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
// desired operations.

#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter two numbers and an operator (+,-,/,*,%): ");
    scanf("%d %d %c", &a, &b, &op);

    if (op == '+')
    {
        printf("Result: %d\n", a + b);
    }
    else if (op == '-')
    {
        printf("Result: %d\n", a - b);
    }
    else if (op == '*')
    {
        printf("Result: %d\n", a * b);
    }
    else if (op == '/')
    {

        printf("Result: %d\n", a / b);
    }
    else if (op == '%')
    {

        printf("Result: %d\n", a % b);
    }
    else
    {
        printf("Invalid operator!\n");
    }
}