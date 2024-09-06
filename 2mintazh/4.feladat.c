#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 250

typedef char * string;

int main()
{
    FILE *fp = fopen("mozik.csv", "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Hiba, a fajl megnyitasa soran!\n");
        exit(1);
    }
    else
    {
        printf("A beolvasas sikeres...\n");
    }
    puts("");
    char sor[MAX];
    char *p;

    string nev_t[100];
    
    int ertekeles;
    string nev;
    int szavazatok;

    int db = 0;
    while (fgets(sor, MAX, fp))
    {
        sor[strlen(sor) - 1] = '\0';

        p = strtok(sor, ";");
        
        p = strtok(NULL, ";");
        nev = strdup(p);

        p = strtok(NULL, ";");
        szavazatok = atoi(strdup(p));
        
        if (szavazatok > 500000)
        {
            nev_t[db] = nev;
            db++; 
            
        }
         
    }
    for (int i = 0; i < db; i++)
    {
        printf("%s \n", nev_t[i]);
    }   
    
    puts("");
    printf("%d db film kapott nagyobb ertekelest!\n", db);

    fclose(fp);
    return 0;
}