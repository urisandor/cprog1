#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char * swapcase(const char* original)
{
    int lenght = 0;
    while (original[lenght] != '\0')
    {
        lenght++;
    }
    
    char *modified = malloc((lenght + 1) * sizeof(char));
    if (modified == NULL)
    {
        printf("Memoriafoglalasi hiba!\n");
        exit(1);
    }

    for (int i = 0; i < lenght; i++)
    {
        if (isupper(original[i]))
        {
            modified[i] = tolower(original[i]);
        }
        else if (islower(original[i]))
        {
            modified[i] = toupper(original[i]);
        }
        else
        {
            modified[i] = original[i];
        }
        
        
    }
    
    modified[lenght] = '\0';

    return modified;
}
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Hiba! Rossz parameterezes!");        
        exit(1);
    }
    
    char *p = argv[1];

    char *result = swapcase(p);

    printf("%s\n", result);

    free(result);

    return 0;
}