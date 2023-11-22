#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 50

struct movie
{
    char name[MAX];
    int year;
};

void readfile(const char filename[], struct movie list[], int *count);
void menu();
void list_movies(const struct movie list[], const int count);
void view_movie(const struct movie list[], const int count);
void add_movie(const char filename[], struct movie list[], int *count);
void del_movie(const char filename[], struct movie list[], int *count);

int main(void)
{
    int count = 0;
    struct movie movie_list[MAX] = {0};
    char filename[] = "movies.csv";
    char list[] = "list";
    char view[] = "view";
    char add[] = "add";
    char del[] = "del";
    char exit[] = "exit";
    char choice[5] = {0};

    readfile(filename, movie_list, &count);
    printf("Contact Manager\n\n");
    menu();
    printf("Enter choice: %s", choice);
    scanf("%s", choice);

    do {
        if (strcmp(choice, list) == 0) {
            list_movies(movie_list, count);
        } else if (strcmp(choice, view) == 0) {
            view_movie(movie_list, count);
        } else if (strcmp(choice, add) == 0) {
            if (count == MAX) {
                printf("The list is full.\n");
            } else {
                add_movie(filename, movie_list, &count);
                printf("Count: %d\n\n", count);
            }
        } else if (strcmp(choice, del) == 0) {
            ;
            // TODO: add the del options
        }
        printf("Enter choice: ");
        scanf("%s", choice);
        } while (strcmp(choice, exit) != 0);

 

    return 0;
}

void readfile(const char filename[], struct movie list[], int *count)
{
    FILE *fp = NULL;
    int ctr = *count;
    int read = 0;

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error opening file %s\n", filename);
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
    fclose(fp);
}

void menu()
{
    printf("COMMAND MENU\n");
    printf("list - Display all contacts\n");
    printf("view - View a contact\n");
    printf("add - Add a contact\n");
    printf("del - Delete a contact\n");
    printf("exit - Exit program\n\n");
}

void list_movies(const struct movie list[], const int count)
{
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i+1, list[i].name);
    }
    printf("\n");
}

void view_movie(const struct movie list[], const int count)
{
    int number = 0;

    printf("Number: ");
    scanf("%d", &number);

    while(true) {
        if (number <= 0 || number > count) {
            printf("Invalid choice.\n");
            printf("Number: ");
            scanf("%d", &number);
        } else {
            break;
        }
    }

    printf("Name: %s\n", list[number-1].name);
    printf("Year: %d\n\n", list[number-1].year);
}

void add_movie(const char filename[], struct movie list[], int *count)
{
    FILE *fp = NULL;
    struct movie new_movie = {0};
    int temp = *count;

    printf("Enter name: ");
    scanf("%s", new_movie.name);
    printf("Enter year: ");
    scanf("%d", &new_movie.year);
    printf("\n");

    list[temp] = new_movie;

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error opening %s\n", filename);
        exit(1);
    }

    fprintf(fp, "%s,%d\n", new_movie.name, new_movie.year);
    fclose(fp);

    *count = ++temp;
}

void del_movie(const char filename[], struct movie list[], int *count)
{
    FILE *fp = NULL;
    int number = 0;

    printf("Enter number: ");
    scanf("%d", number);

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error opening %s\n", filename);
        exit(1);
    }
    //TODO: update the file
    fclose(fp);
}