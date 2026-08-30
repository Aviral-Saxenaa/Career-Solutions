#include <stdio.h>

struct Admin
{
    int id;
    char name[50];
    float salary;
    float allowance;
};

void storeAdmin(struct Admin *a)
{
    printf("Enter id: ");
    scanf("%d", &a->id);

    printf("Enter name: ");
    scanf(" %[^\n]", a->name);

    printf("Enter salary: ");
    scanf("%f", &a->salary);

    printf("Enter allowance: ");
    scanf("%f", &a->allowance);
}

void displayAdmin(struct Admin a)
{
    printf("\nAdmin details\n");

    printf("ID: %d\n", a.id);
    printf("Name: %s\n", a.name);
    printf("Salary: %.2f\n", a.salary);
    printf("Allowance: %.2f\n", a.allowance);
    printf("Total salary: %.2f\n", a.salary + a.allowance);
}

int main()
{
    struct Admin a1;

    storeAdmin(&a1);
    displayAdmin(a1);

    return 0;
}