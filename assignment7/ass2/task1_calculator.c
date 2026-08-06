#include <stdio.h>

void performCalculation(int *first, int *second, char *op)
{
    switch (*op) {
        case '+':
            printf("Result = %d\n", *first + *second);
            break;
        case '-':
            printf("Result = %d\n", *first - *second);
            break;
        case '*':
            printf("Result = %d\n", *first * *second);
            break;
        case '/':
            if (*second == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
                printf("Result = %d\n", *first / *second);
            }
            break;
        case '%':
            if (*second == 0) {
                printf("Modulo by zero is not allowed.\n");
            } else {
                printf("Result = %d\n", *first % *second);
            }
            break;
        default:
            printf("Invalid operator.\n");
    }
}

int main(void)
{
    int first;
    int second;
    char op;

    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    performCalculation(&first, &second, &op);

    return 0;
}
