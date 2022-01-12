#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

struct Book
{
    char name[20];
    char author[20];
    size_t realize_year;
};

int main ()
{
    struct Book Shelf[SIZE];
    size_t i;

    for(i = 0; i<SIZE; i++)
    {
        printf("Enter name: ");
        scanf("%19[^\n]s", Shelf[i].name);
        fflush(stdin);
        printf("Enter author: ");
        scanf("%19[^\n]s", Shelf[i].author);
        fflush(stdin);
        printf("Enter year: ");
        scanf("%zu", &Shelf[i].realize_year);
        fflush(stdin);
    }

    for(i = 0; i<SIZE; i++)
    {
        printf("Name %s\n", Shelf[i].name);
        printf("Author %s\n", Shelf[i].author);
        printf("Year %zu\n", Shelf[i].realize_year);
    }

    return 0;
}
