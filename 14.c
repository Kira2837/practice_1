#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char big_str[20];
    char sml_str[10];

    scanf("%19[^\n]s", big_str);
    fflush(stdin);
    scanf("%9[^\n]s", sml_str);

    strncat(sml_str, big_str, sizeof(sml_str)-strlen(sml_str)-1);

    printf("%s", sml_str);
}
