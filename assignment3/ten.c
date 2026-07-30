#include <stdio.h>

int main()
{

    int no;
    printf("Enter a number: ");
    scanf("%d", &no);

    int first = no % 10; // Get the first digit

    while (no >= 10)
    {
        no = no / 10; // Remove the last digit
    }
    int last = no; // Get the last digit

    printf("sum of first and last digit is: %d", (first + last));
}