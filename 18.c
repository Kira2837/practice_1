#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int* mas;
    size_t i;

    mas = (int*)malloc(3*sizeof(mas[0]));

    for(i = 0;i<3;i++)
    {
        scanf("%d", &mas[i]);
    }

    for(i = 0;i<3;i++)
    {
        printf("%d", mas[i]);
    }

    return 0;
}
