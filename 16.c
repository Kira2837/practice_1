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
    struct Book* pBook;
    size_t i;

    for(i = 0; i<SIZE; i++)
    {
        pBook = &Shelf[i];
        printf("Enter name: ");
        scanf("%19[^\n]s", pBook->name);
        fflush(stdin);
        printf("Enter author: ");
        scanf("%19[^\n]s", pBook->author);
        fflush(stdin);
        printf("Enter year: ");
        scanf("%zu", &pBook->realize_year);
        fflush(stdin);
    }

    for(i = 0; i<SIZE; i++)
    {
        pBook = &Shelf[i];
        printf("Name %s\n", pBook->name);
        printf("Author %s\n", pBook->author);
        printf("Year %zu\n", pBook->realize_year);
    }

    return 0;
}
