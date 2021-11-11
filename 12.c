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
        if(('A' <= str[i]) && (str[i] <= 'Z'))
        {
            str[i] = str[i]+32;
        }
    }

    printf("%s", str);

    return 0;
}
