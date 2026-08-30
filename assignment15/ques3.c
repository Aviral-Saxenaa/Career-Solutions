#include <stdio.h>

typedef struct Players
{
    char name[20];
    int matches;
    int runs;
    int wickets;
} Player;

void storeInfo(Player p[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter player %d details\n", i + 1);

        printf("Enter name: ");
        scanf("%s", p[i].name);

        printf("Enter matches: ");
        scanf("%d", &p[i].matches);

        printf("Enter runs: ");
        scanf("%d", &p[i].runs);

        printf("Enter wickets: ");
        scanf("%d", &p[i].wickets);
    }
}

void displayInfo(Player p[], int size)
{
    printf("\nPlayer details\n");

    for (int i = 0; i < size; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Name: %s\n", p[i].name);
        printf("Matches: %d\n", p[i].matches);
        printf("Runs: %d\n", p[i].runs);
        printf("Wickets: %d\n", p[i].wickets);
    }
}

int maxRuns(Player p[], int size)
{
    int max = p[0].runs;
    int playerNo = 0;

    for (int i = 1; i < size; i++)
    {
        if (p[i].runs > max)
        {
            max = p[i].runs;
            playerNo = i;
        }
    }

    return playerNo;
}

int maxWicket(Player p[], int size)
{
    int max = p[0].wickets;
    int playerNo = 0;

    for (int i = 1; i < size; i++)
    {
        if (p[i].wickets > max)
        {
            max = p[i].wickets;
            playerNo = i;
        }
    }

    return playerNo;
}

int main()
{
    int size = 10;
    Player p1[10];

    storeInfo(p1, size);
    displayInfo(p1, size);

    int runsPlayer = maxRuns(p1, size);

    printf("\nPlayer with maximum runs:\n");
    printf("Name: %s\n", p1[runsPlayer].name);
    printf("Runs: %d\n", p1[runsPlayer].runs);

    int wicketPlayer = maxWicket(p1, size);

    printf("\nPlayer with maximum wickets:\n");
    printf("Name: %s\n", p1[wicketPlayer].name);
    printf("Wickets: %d\n", p1[wicketPlayer].wickets);

    return 0;
}