#include <stdio.h>

int main()
{
    int n;
    printf("enter size\n");
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    int arr3[n];

    printf("enter 1st array \n");
    for (int i = 0; i < n; i++)
    {
        printf("enter no ");
        scanf("%d", &arr1[i]);
    }

    printf("\nenter 2nd array \n");
    for (int i = 0; i < n; i++)
    {
        printf("enter no ");
        scanf("%d", &arr2[i]);
    }

    printf("\nSum array is : \n");
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
        printf("%d ", arr3[i]);
    }

    // printf("The max is %d and min is %d", maxi, mini);
}