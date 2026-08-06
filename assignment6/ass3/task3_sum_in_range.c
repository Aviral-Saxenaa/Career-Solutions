#include <stdio.h>

int sumInRange(int start, int end) {
    int i;
    int sum = 0;

    for (i = start; i <= end; i++) {
        sum += i;
    }

    return sum;
}

int main(void) {
    int start;
    int end;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    printf("Sum = %d\n", sumInRange(start, end));

    return 0;
}
