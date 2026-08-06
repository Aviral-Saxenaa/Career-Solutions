#include <stdio.h>

const char *getTriangleType(int a, int b, int c) {
    if (a == b && b == c) {
        return "Equilateral triangle";
    }
    if (a == b || b == c || a == c) {
        return "Isosceles triangle";
    }
    return "Scalene triangle";
}

int main(void) {
    int a;
    int b;
    int c;

    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("%s\n", getTriangleType(a, b, c));

    return 0;
}
