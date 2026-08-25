#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

void readArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("enter no ");
        scanf("%d", &arr[i]);
    }
}

void printPrimeNumbers(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (isPrime(arr[i]))
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int n;
    int *arr;

    printf("enter size\n");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("memory allocation failed");
        return 1;
    }

    readArray(arr, n);
    printPrimeNumbers(arr, n);

    free(arr);
    return 0;
}
