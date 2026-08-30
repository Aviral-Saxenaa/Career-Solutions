#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

struct Student storeStudent()
{
    struct Student s;

    printf("enter roll no ");
    scanf("%d", &s.rollNo);
    printf("enter name ");
    scanf(" %49[^\n]", s.name);
    printf("enter marks ");
    scanf("%f", &s.marks);

    return s;
}

void displayStudentByValue(struct Student s)
{
    printf("\nStudent details\n");
    printf("roll no : %d\n", s.rollNo);
    printf("name : %s\n", s.name);
    printf("marks : %.2f\n", s.marks);
}

void displayStudentByAddress(struct Student *s)
{
    printf("\nStudent details using address\n");
    printf("roll no : %d\n", s->rollNo);
    printf("name : %s\n", s->name);
    printf("marks : %.2f\n", s->marks);
}

int main()
{
    struct Student s1;

    s1 = storeStudent();
    displayStudentByValue(s1);
    displayStudentByAddress(&s1);

    return 0;
}
