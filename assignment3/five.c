// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong

#include <stdio.h>

int main()
{

    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    int original = no;

    int sum = 0;

    while (no > 0)
    {
        int digit = no % 10;
        sum += digit * digit * digit;
        no /= 10;
    }

    if (sum == original)
    {
        printf("%d is an Armstrong number", original);
    }
    else
    {
        printf("%d is not an Armstrong number", original);
    }
}