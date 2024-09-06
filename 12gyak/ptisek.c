#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define BUFFSIZE 90

typedef char *string;

typedef struct 
{
    char nev[20];
    int kor;
    char szak[5];
}Hallgato;

int feltolt(const char* fname, const int n, Hallgato tomb[])
{
    //olvassuk be a fajlt soronkent
    FILE *fp = fopen(fname, "r");
    if (fp == NULL)
    {
        fprintf(stderr,"Hiba a beolvasaskor!\n");
        exit(1);
    }
    
    
    char buffer[BUFFSIZE];
    char *p;
    string nev;
    int kor;
    string szak;
    int index = 0;
    while (fgets(buffer, BUFFSIZE, fp) != NULL)
    {
        buffer[strlen(buffer) - 1] = '\0';
        p = strtok(buffer, ",");
        nev = p;
        p = strtok(NULL, ",");
        kor = atoi(p);
        p = strtok(NULL, ",");
        szak = p;

        Hallgato h;
        strcpy(h.nev, nev);
        h.kor = kor;
        strcpy(h.szak, szak);

        tomb[index] = h;
        index++;
    }
    
    fclose(fp);

    return index; 
}

void print_hallgato(const Hallgato *h)
{
    printf("nev: %s  kor: %d  szak:%s\n", h->nev, h->kor, h->szak);
}

void rendezes(Hallgato tomb[], int meret)
{
    int i, j;
    Hallgato temp;

    for (i = 0; i < meret - 1; ++i)
    {
        for (j = i + 1; j < meret; ++j)
        {
            if (strcmp(tomb[j].nev, tomb[i].nev) < 0)
            {
                temp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = temp;
            }
        }
    }
}

int cmp(const void* h1, const void* h2)
{
    const Hallgato *a = h1;
    const Hallgato *b = h2;

    return strcmp(a->nev, b->nev);
}
int main()
{
    const char* fname = "input.txt";

    Hallgato tomb[MAX];

    int elemszam = feltolt(fname, MAX, tomb);

    //rendezes(tomb, elemszam);

    qsort(tomb, elemszam, sizeof(Hallgato), cmp);

    for (int i = 0; i < elemszam; i++)
    {
        print_hallgato(&tomb[i]);
    }
    
    return 0;
}