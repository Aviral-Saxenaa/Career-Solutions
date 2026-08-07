#include <stdio.h>

int main()
{
    int arr[5] = {2, 1, 4, 3, 5};

    printf("Alternate numbers are \n");

    // int sum = 0;
    for (int i = 0; i < 5; i += 2)
    {
        printf("%d ", arr[i]);
    }
}