#include <stdio.h>
#include <stddef.h>
#include <string.h>
#define LENGTH 100

int main()
{
    size_t i, len;
    char str[LENGTH+1];

    scanf("%[^\n]s", str);

    len = strlen(str);

    for(i = 0;i < len;i++)
    {
        if(str[i] == ' ')
        {
            str[i] = '_';
        }
    }

    printf("%s", str);

    return 0;
}
