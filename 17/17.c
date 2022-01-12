#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int Num = 0;
    char Let = 'a';

    int* pNum = &Num;
    char* pLet = &Let;

    scanf("%d", pNum);
    fflush(stdin);
    scanf("%c", pLet);

    printf("%d", *pNum);
    printf("%c", *pLet);

    return 0;
}
