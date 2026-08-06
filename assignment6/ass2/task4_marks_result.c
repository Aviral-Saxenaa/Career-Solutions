#include <stdio.h>

    char getResultClass(int marks) {
    if (marks > 75) {
        return 'A';
    }
    if (marks > 65) {
        return 'B';
    }
    if (marks > 55) {
        return 'C';
    }
    if (marks >= 40) {
        return 'D';
    }
    return 'F';
}

int main(void) {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("Result: %c\n", getResultClass(marks));

    return 0;
}
