// 4. Print strong numbers in the given range 1 to n.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        int temp = i;
        while (temp > 0)
        {
            int digit = temp % 10;
            int factorial = 1;
            for (int j = 1; j <= digit; j++)
            {
                factorial *= j;
            }
            sum += factorial;
            temp /= 10;
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}