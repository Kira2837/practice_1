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
        if((('A' <= str[i]) && (str[i] >= 'Z')) || (('a' <= str[i]) && (str[i] >= 'z')))
        {
            printf("%c ", str[i]);
        }
    }

    return 0;
}
