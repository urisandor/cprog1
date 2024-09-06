#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char * swapcase(const char* original)
{
    // az eredeti string hosszanak meghatarozasa
    int length = 0;
    while (original[length] != '\0')
    {
        length++;
    }
    
    // Dinamikusan lefoglalom a memoriat az uj stringhez
    char *modified = (char *)malloc((length + 1) * sizeof(char));
    if (modified == NULL)
    {
        printf("Memoriafoglalasi hiba!\n");
        exit(1);
    }
    
    // karakterek atalakitasa
    for (int i = 0; i < length; i++)
    {
        if (islower(original[i]))
        {
            modified[i] = toupper(original[i]);
        }
        else if (isupper(original[i]))
        {
            modified[i] = tolower(original[i]);
        }
        else
        {
            modified[i] = original[i];
        }
    }
    
    // A string vegere tesszem a null terminatort
    modified[length] = '\0';
    
    return modified;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr,"Hiba! Adj meg egy stringet!");
        exit(1);
    }
    //itt hivom meg a swapcase fuggvenyt a megadott stringre
    char *result = swapcase(argv[1]);
    
    
    // eredmeny kiiratasa
    printf("%s\n", result);
    
    // felszabaditom a dinamukusan lefoglalt memoriat
    free(result);

    return 0;
}