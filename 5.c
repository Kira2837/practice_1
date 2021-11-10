#include <stdio.h>
#include <stddef.h>
#define STRINGS 2
#define COLUMNS 2

int main()
{
    size_t i, j;
    int number;
    int m1[STRINGS][COLUMNS] = {1, 1, 1, 1};
    int m2[STRINGS][COLUMNS] = {1, 2, 3, 4};

    //сложение двух матриц 2х2
    for(i = 0; i < STRINGS;i++)
    {
        for(j = 0; j < COLUMNS;j++)
        {
            printf("%d\t", m1[i][j]+m2[i][j]);
        }
        printf("\n");
    }

    //умножение второй матрицы на число
    printf("enter the number: ");
    scanf("%d", &number);
    for(i = 0; i < STRINGS;i++)
    {
        for(j = 0; j < COLUMNS;j++)
        {
            printf("%d\t", number*m2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
