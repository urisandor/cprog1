#include "capitalize.h"
#include <ctype.h>
#include <stdio.h>

void capitalize(char s[])
{
    if (s[0] == '\0')
    {
        return;
    }
    
    int hossz = strlen(s);
    s[0] = toupper(s[0]);
    for (int i = 1; i < hossz; i++)
    {
        s[i] = tolower(s[i]);
    }
    
}