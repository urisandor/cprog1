#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* swapcase(const char* original, const char mit, const char mire)
{
    char* modified = malloc(strlen(original) * sizeof(char));

    for (int i = 0; i < original[i] != '\0'; i++)
    {
        if(original[i] == mit)
        {
            modified[i] = mire;
        }else
        {
            modified[i] = original[i];
        }
    }

    return modified;
}

int main(int argc, char const argv[])
{

    char s = swapcase(argv[1],argv[2][0],argv[3][0]);

    printf("%s ", s);

    free(s);

    return 0;
}