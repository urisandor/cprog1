#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* swapcase(const char* original, const char mit, const char mire)
{
    char* modified = malloc(strlen(original) * sizeof(char));
    for (int i = 0; i < strlen(original) != '\0'; i++)
    {
        if (original[i] == mit)
        {
            modified[i] = mire;
        }
        else
        {
            modified[i] = original[i];
        }
    }
    return modified;
}

int main(int argc, char* argv[]){

    char* szo = argv[1];
    char* mit_p = argv[2];
    char* mire_p = argv[3];

    char mit = *mit_p;
    char mire = *mire_p;

    char* result = swapcase(szo, mit, mire);
    
    printf("%s \n", result);
    
    free(result);
    return 0;
}