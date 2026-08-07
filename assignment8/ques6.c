#include <stdio.h>

int isPrime(int n){

    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("enter size\n");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter no ");
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < n; i++)
    {
        if(isPrime(arr[i])) printf("%d ",arr[i]);
    }

    // printf("The max is %d and min is %d", maxi, mini);
}