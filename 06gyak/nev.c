#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc > 2)
    {
        puts("Hiba");
        exit(1);
    }
    // HA ide erunk argc erteke 1 vagy 2.


    if (argc == 1)
    {
        puts("Hello world");
    }
    if (argc == 2)
    {
        string name = argv[1];
        if (strcmp(name, "Batman") == 0 || strcmp(name, "Robin") == 0)
        {
            puts("Deneverveszely!");
        }
        else
        {
            printf("Hello %s!\n", name);
        }
    }
    
    return 0;
}