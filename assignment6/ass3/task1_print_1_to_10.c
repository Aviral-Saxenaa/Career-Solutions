#include <stdio.h>

void printOneToTen() {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    printOneToTen();
    return 0;
}
