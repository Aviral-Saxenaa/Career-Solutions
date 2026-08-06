#include <stdio.h>

int findGreatest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    }
    if (b >= a && b >= c) {
        return b;
    }
    return c;
}

int main(void) {
    int a;
    int b;
    int c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Greatest number is %d\n", findGreatest(a, b, c));

    return 0;
}
