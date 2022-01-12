#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char big_str[20];
    char sml_str[10];

    scanf("%49[^\n]s", big_str);

    strncpy(sml_str, big_str, sizeof(sml_str)-1);
    sml_str[sizeof(sml_str)-1]='\0'

    printf("%s", sml_str);
    
    return 0;
}
