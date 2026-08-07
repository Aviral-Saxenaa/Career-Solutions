#include <stdio.h>

int main()
{
    int arr[5] = {2, 1, 4, 3, 5};

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    printf("Sum is %d", sum);
}