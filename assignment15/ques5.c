#include <stdio.h>
#include <string.h>

typedef struct Movie
{
    char title[50];
    char director[50];
    int year;
    char genre[30];
} Movie;

void addMovies(Movie m[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter movie %d details\n", i + 1);

        printf("Enter title: ");
        scanf("%s", m[i].title);

        printf("Enter director: ");
        scanf("%s", m[i].director);

        printf("Enter release year: ");
        scanf("%d", &m[i].year);

        printf("Enter genre: ");
        scanf("%s", m[i].genre);
    }
}

void displayMovie(Movie m)
{
    printf("\nTitle: %s\n", m.title);
    printf("Director: %s\n", m.director);
    printf("Release year: %d\n", m.year);
    printf("Genre: %s\n", m.genre);
}

void searchMovie(Movie m[], int size)
{
    char title[50];
    int found = 0;

    printf("\nEnter movie title to search: ");
    scanf("%s", title);

    for (int i = 0; i < size; i++)
    {
        if (strcmp(m[i].title, title) == 0)
        {
            printf("\nMovie found\n");
            displayMovie(m[i]);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("\nMovie not found\n");
    }
}

void updateMovie(Movie m[], int size)
{
    char title[50];
    int found = 0;

    printf("\nEnter movie title to update: ");
    scanf("%s", title);

    for (int i = 0; i < size; i++)
    {
        if (strcmp(m[i].title, title) == 0)
        {
            printf("\nEnter new details\n");

            printf("Enter title: ");
            scanf("%s", m[i].title);

            printf("Enter director: ");
            scanf("%s", m[i].director);

            printf("Enter release year: ");
            scanf("%d", &m[i].year);

            printf("Enter genre: ");
            scanf("%s", m[i].genre);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nMovie not found\n");
    }
}

int main()
{
    int size;

    printf("Enter number of movies: ");
    scanf("%d", &size);

    Movie movies[size];

    addMovies(movies, size);

    searchMovie(movies, size);

    updateMovie(movies, size);

    printf("\nUpdated movie details\n");

    for (int i = 0; i < size; i++)
    {
        displayMovie(movies[i]);
    }

    return 0;
}