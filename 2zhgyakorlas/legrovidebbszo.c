#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Hiba nem megfelelo parameterezes!");
        exit(1);
    }
    else
    {
        int min = strlen(argv[1]);
        
        for (int i = 2; i < argc; i++)
        {
            if (min > strlen(argv[i]))
            {
                min = strlen(argv[i]);
            }
        }
        for (int i = 1; i < argc; i++)
        {
            if (strlen(argv[i]) == min)
            {
                printf("%s\n", argv[i]);
            }
        }
    }
    return 0;
}