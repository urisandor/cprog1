#include <stdio.h>
#include <stdlib.h>

#define SEED 9595
#define MAX 10

int randint(int lo, int hi)
{
    return (rand() % (hi - lo + 1)) + lo;
}

void feltolt(const int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        tomb[i] = randint(21, 69);
    }
}

void kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    
}

// kap egy tombot
// helyben redezi a tombot novekvo sorrendben, nem ad vissza semmit
void sort_asc(const int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (tomb[j] > tomb[i])
            {
                int tmp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        //printf("%d ", tomb[i]);
    }
    
}

int * sorted(const int n, const int tomb[])
{
    int *copy = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        copy[i] = tomb[i];
    }
    
    sort_asc(n, copy);

    return copy;
}


int main()
{
    srand(SEED);
    int eredeti[MAX];

    feltolt(MAX, eredeti);

    int *rendezett = sorted(MAX, eredeti);

    kiir(MAX, eredeti);
    puts("");
    
    kiir(MAX, rendezett);
    free(rendezett);

    return 0;
}