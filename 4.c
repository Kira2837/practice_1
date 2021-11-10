#include <stdio.h>
#include <stddef.h>
#define SIZE 5

int main()
{
    size_t i, j;
    int num1[SIZE];
    int num2[SIZE];

    printf("num1\n");
    for(i = 0;i < SIZE; i++)
    {
        scanf("%d", &num1[i]);
    }

    printf("num2\n");
    for(j = 0;j < SIZE; j++)
    {
        scanf("%d", &num2[j]);
    }

    printf("identical elements: ");
    for(i = 0;i < SIZE; i++)
    {
        for(j = i;j < SIZE; j++)
        {
            if(num1[i] == num2[j])
            {
                printf("%d ", num1[i]);
            }
        }
    }

    return 0;
}
