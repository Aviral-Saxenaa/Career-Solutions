#include <stdio.h>

int canVote(int age) {
    return age >= 18;
}

int main(void) {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (canVote(age)) {
        printf("The person is eligible to vote.\n");
    } else {
        printf("The person is not eligible to vote.\n");
    }

    return 0;
}
