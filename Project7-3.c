#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct movie
{
    char name[50];
    int year;
};

void readfile(FILE *fp, struct movie list[], int *count);

int main(void)
{
    FILE *fp = NULL;
    int count = 0;
    struct movie list[50] = {0};

    readfile(fp, list, &count);

    for (int i = 0; i < count; i++)
    {
        printf("Name: %s\n", list[i].name);
        printf("Year: %d\n\n", list[i].year);
    }

    fclose(fp);
    return 0;
}

void readfile(FILE *fp, struct movie list[], int *count)
{
    int ctr = *count;
    int read = 0;

    fp = fopen("movies.csv", "r");

    if (fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }

    do
    {
        struct movie temp;
        read = fscanf(fp, "%49[^,],%d\n", temp.name, &temp.year);
        if (read != 2 && !feof(fp))
        {
            printf("Error with file format.\n");
            exit(1);
        }
        list[ctr++] = temp;

    } while (!feof(fp));

    *count = ctr;
}
