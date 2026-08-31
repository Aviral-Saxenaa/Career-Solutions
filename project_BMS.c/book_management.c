#include <stdio.h>
#include <string.h>

typedef struct Book
{
    int id;
    char name[50];
    char author[50];
    char category[30];
    float price;
    float rating;
} Book;

void addBook(Book b[], int *n)
{
    printf("\nEnter book id: ");
    scanf("%d", &b[*n].id);

    printf("Enter book name: ");
    scanf("%s", b[*n].name);

    printf("Enter author name: ");
    scanf("%s", b[*n].author);

    printf("Enter category: ");
    scanf("%s", b[*n].category);

    printf("Enter price: ");
    scanf("%f", &b[*n].price);

    printf("Enter rating: ");
    scanf("%f", &b[*n].rating);

    *n = *n + 1;

    printf("Book added successfully\n");
}

void displayBook(Book b)
{
    printf("\nID: %d\n", b.id);
    printf("Name: %s\n", b.name);
    printf("Author: %s\n", b.author);
    printf("Category: %s\n", b.category);
    printf("Price: %.2f\n", b.price);
    printf("Rating: %.2f\n", b.rating);
}

void displayAll(Book b[], int n)
{
    if (n == 0)
    {
        printf("No books available\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        displayBook(b[i]);
    }
}

void removeBook(Book b[], int *n)
{
    int id;

    printf("\nEnter book id to remove: ");
    scanf("%d", &id);

    for (int i = 0; i < *n; i++)
    {
        if (b[i].id == id)
        {
            for (int j = i; j < *n - 1; j++)
            {
                b[j] = b[j + 1];
            }

            *n = *n - 1;

            printf("Book removed successfully\n");
            return;
        }
    }

    printf("Book not found\n");
}

void searchById(Book b[], int n)
{
    int id;

    printf("\nEnter book id: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++)
    {
        if (b[i].id == id)
        {
            displayBook(b[i]);
            return;
        }
    }

    printf("Book not found\n");
}

void searchByName(Book b[], int n)
{
    char name[50];

    printf("\nEnter book name: ");
    scanf("%s", name);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(b[i].name, name) == 0)
        {
            displayBook(b[i]);
            return;
        }
    }

    printf("Book not found\n");
}

void showAuthorBooks(Book b[], int n)
{
    char author[50];
    int found = 0;

    printf("\nEnter author name: ");
    scanf("%s", author);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(b[i].author, author) == 0)
        {
            displayBook(b[i]);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("No books found\n");
    }
}

void showCategoryBooks(Book b[], int n)
{
    char category[30];
    int found = 0;

    printf("\nEnter category: ");
    scanf("%s", category);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(b[i].category, category) == 0)
        {
            displayBook(b[i]);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("No books found\n");
    }
}

void updateBook(Book b[], int n)
{
    int id;

    printf("\nEnter book id: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++)
    {
        if (b[i].id == id)
        {
            printf("Enter new price: ");
            scanf("%f", &b[i].price);

            printf("Enter new rating: ");
            scanf("%f", &b[i].rating);

            printf("Book updated successfully\n");
            return;
        }
    }

    printf("Book not found\n");
}

void sortBooks(Book b[], int n)
{
    int choice;
    Book temp;

    printf("\n1. Price high to low\n");
    printf("2. Price low to high\n");
    printf("3. Rating high to low\n");
    printf("4. Rating low to high\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (choice == 1 && b[j].price < b[j + 1].price)
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }

            if (choice == 2 && b[j].price > b[j + 1].price)
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }

            if (choice == 3 && b[j].rating < b[j + 1].rating)
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }

            if (choice == 4 && b[j].rating > b[j + 1].rating)
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    displayAll(b, n);
}

int main()
{
    Book books[100];

    int n = 0;
    int choice;

    do
    {
        printf("\n----- Book Management System -----\n");

        printf("1. Add Book\n");
        printf("2. Remove Book\n");
        printf("3. Search Book by ID\n");
        printf("4. Search Book by Name\n");
        printf("5. Show Author's Books\n");
        printf("6. Show Category's Books\n");
        printf("7. Update Book\n");
        printf("8. Display Sorted Books\n");
        printf("9. Display All Books\n");
        printf("0. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            addBook(books, &n);
        }
        else if (choice == 2)
        {
            removeBook(books, &n);
        }
        else if (choice == 3)
        {
            searchById(books, n);
        }
        else if (choice == 4)
        {
            searchByName(books, n);
        }
        else if (choice == 5)
        {
            showAuthorBooks(books, n);
        }
        else if (choice == 6)
        {
            showCategoryBooks(books, n);
        }
        else if (choice == 7)
        {
            updateBook(books, n);
        }
        else if (choice == 8)
        {
            sortBooks(books, n);
        }
        else if (choice == 9)
        {
            displayAll(books, n);
        }
        else if (choice == 0)
        {
            printf("Thank you\n");
        }
        else
        {
            printf("Wrong choice\n");
        }

    } while (choice != 0);

    return 0;
}