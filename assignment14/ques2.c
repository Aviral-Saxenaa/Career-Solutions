#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void storeEmployees(struct Employee emp[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter employee %d details\n", i + 1);

        printf("Enter id: ");
        scanf("%d", &emp[i].id);

        printf("Enter name: ");
        scanf("%s", emp[i].name);

        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);
    }
}

void displayEmployees(struct Employee emp[], int size)
{
    printf("\nEmployee details\n");

    for (int i = 0; i < size; i++)
    {
        printf("\nID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
    }
}

int main()
{
    struct Employee emp[3];

    storeEmployees(emp, 3);
    displayEmployees(emp, 3);

    return 0;
}