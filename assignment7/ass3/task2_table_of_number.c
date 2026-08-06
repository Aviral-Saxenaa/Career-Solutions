#include <stdio.h>

void printTable(int *number)
{
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d ", (*number) * i);
    }
    printf("\n");
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printTable(&number);

    return 0;
}
