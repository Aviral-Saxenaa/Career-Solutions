//palindrome

#include <stdio.h>
int main()
{
    int no, original, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &no);
    original = no;

    while (no > 0)
    {
        int digit = no % 10;
        reverse = reverse * 10 + digit;
        no /= 10;
    }

    if (reverse == original)
    {
        printf("%d is a palindrome number", original);
    }
    else
    {
        printf("%d is not a palindrome number", original);
    }
}