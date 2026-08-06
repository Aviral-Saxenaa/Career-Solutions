#include <stdio.h>
#include <ctype.h>

float getFinalPrice(float price, char isStudent) {
    float discount = 0.0f;

    isStudent = (char)tolower((unsigned char)isStudent);

    if (isStudent == 'y') {
        if (price > 500) {
            discount = 0.20f;
        } else {
            discount = 0.10f;
        }
    } else if (price > 600) {
        discount = 0.15f;
    }

    return price - (price * discount);
}

int main(void) {
    float price;
    char isStudent;

    printf("Enter purchase amount: ");
    scanf("%f", &price);
    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent);

    printf("Final price = %.2f\n", getFinalPrice(price, isStudent));

    return 0;
}
