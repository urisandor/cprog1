#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 10000

int is_strong_password(char tomb[])
{
    int kisbetu = 0, nagybetu = 0, szamjegy = 0, speckarakter = 0;

    for (int i = 0; tomb[i] != '\0'; i++) 
    {
        char ch = tomb[i];
        if (islower(ch))
        {
            kisbetu = 1;
        }
        else if (isupper(ch))
        {
          nagybetu = 1;
        }  
        else if (isdigit(ch)) 
        {
            szamjegy++;
        }
        else if (ch == '.' || ch == ',' || ch == ':' || ch == ';')
        {
            speckarakter = 1;
        }
    }

    return (kisbetu && nagybetu && (szamjegy >= 2) && speckarakter);
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Hiba helyeteln bemenet!\n");
        exit(1);
    }
    
    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Hiba a megnyitas kozben!\n");
        exit(1);
    }
    
    char tomb[SIZE];
    int eros_jelszo = 0;

    while (fgets(tomb, SIZE, fp))
    {
        if (is_strong_password(tomb))
        {
            eros_jelszo++;
        }
        
    }
    
    printf("%d db eros jelszo van!\n", eros_jelszo);


    fclose(fp);
    return 0;
}