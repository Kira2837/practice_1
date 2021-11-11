#include <stdio.h>
#include <stddef.h>
#include <string.h>
#define LENGTH 100
#define TRUE 1
#define FALSE 0

int main()
{
    size_t i, len, is_palindrome;
    char str[LENGTH+1];

    scanf("%[^\n]s", str);

    len = strlen(str);

    is_palindrome = TRUE;

    for(i = 0;i < len/2;i++)
    {
        if(str[i] != str[len-i-1])
        {
            is_palindrome = FALSE;
            break;
        }
    }

    if(is_palindrome)
    {
        printf("string is palindrome");
    }
    else
    {
        printf("string is not palindrome");
    }


    return 0;
}
