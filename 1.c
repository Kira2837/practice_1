#include <stdio.h>
#include <stdio.h>
#define SIZE 5

int main()
{
    size_t i;
    int maxx, minn;
    int numbers[SIZE];

    for(i = 0;i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    }

    maxx = minn = numbers[0];

    for(i = 0;i < SIZE; i++)
    {
        if(numbers[i] > maxx)
        {
            maxx = numbers[i];
        }

        if(numbers[i] < minn)
        {
            minn = numbers[i];
        }
    }

    printf("max: %d\tmin: %d", maxx, minn);
    return 0;
}
