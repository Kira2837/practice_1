#include <stdio.h>
#include <stddef.h>
#define SIZE 5

int main()
{
    size_t i;
    int numbers[SIZE];

    for(i = 0;i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for(i = 0;i < SIZE; i++)
    {
        if(i == numbers[i])
        {
            printf("%zu: %d\n", i, numbers[i]);
        }
    }

    return 0;
}
