#include <stdio.h>

struct HR
{
    int id;
    char name[50];
    float salary;
    float commission;
};

struct HR storeHR()
{
    struct HR h;

    printf("Enter id: ");
    scanf("%d", &h.id);

    printf("Enter name: ");
    scanf("%s", h.name);

    printf("Enter salary: ");
    scanf("%f", &h.salary);

    printf("Enter commission: ");
    scanf("%f", &h.commission);

    return h;
}

void displayHR(struct HR *h)
{
    printf("\nHR details\n");

    printf("ID: %d\n", h->id);
    printf("Name: %s\n", h->name);
    printf("Salary: %.2f\n", h->salary);
    printf("Commission: %.2f\n", h->commission);
    printf("Total salary: %.2f\n", h->salary + h->commission);
}

int main()
{
    struct HR h1;

    h1 = storeHR();

    displayHR(&h1);

    return 0;
}