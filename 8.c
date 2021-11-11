#include <stdio.h>
#include <stddef.h>
#define LENGTH 100

int main()
{
    size_t i, len = 0;
    char str[LENGTH+1];

    scanf("%[^\n]s", str);

    for(i = 0;i < LENGTH+1;i++)
    {
        if(str[i] == '\0')
        {
            break;
        }
        len++;
    }

    printf("%zu", len);

    return 0;
}
