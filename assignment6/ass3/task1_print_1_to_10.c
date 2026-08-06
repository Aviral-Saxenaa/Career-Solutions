#include <stdio.h>

void printOneToTen(void) {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main(void) {
    printOneToTen();
    return 0;
}
