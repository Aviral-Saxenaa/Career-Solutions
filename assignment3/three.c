#include <stdio.h>

int main()
{

    int sum = 0;

    int start, end;
    printf("Enter the start and end values: ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++)
    {
        sum += i;
    }

    printf("The sum of numbers from %d to %d is: %d\n", start, end, sum);
}