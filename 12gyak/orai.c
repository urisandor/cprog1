#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "capitalize.h"

typedef char * string;


int main()
{
    char text[] = "saNYi";

    printf("Elotte: %s\n", text);
    capitalize(text);
    printf("Utana: %s\n", text);
    
    return 0;
}