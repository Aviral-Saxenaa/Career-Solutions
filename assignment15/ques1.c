#include <stdio.h>

typedef struct Book
{
    char bname[50];
    int id;
    char author[50];
    float price;
} Book;

int main()
{
    Book b;

    printf("Enter book name: ");
    scanf("%s", b.bname);

    printf("Enter id: ");
    scanf("%d", &b.id);

    printf("Enter author: ");
    scanf("%s", b.author);

    printf("Enter price: ");
    scanf("%f", &b.price);

    printf("\nBook details\n");

    printf("Book name: %s\n", b.bname);
    printf("ID: %d\n", b.id);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);

    return 0;
}