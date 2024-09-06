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
    
}

//helyben modosit, elemek sorrendjet
//nem ad vissza semmmit
void reverse(const int n, int tomb[])
{
    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (tomb[j] < tomb[i])
            {
                int tmp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = tmp;
            }
        }
    }*/

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int tmp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = tmp;

        i++;
        j--;
    }
    
}
void sort_desc(const int n, int tomb[])
{
    sort_asc(n, tomb);
    reverse(n, tomb);
}

int main()
{
    srand(SEED);
    int tomb[MAX];

    feltolt(MAX, tomb);

    kiir(MAX, tomb);
    puts("");
    sort_asc(MAX, tomb);
    puts("");
    //sort_desc(MAX, tomb);
    //kiir(MAX, tomb);
    reverse(MAX, tomb);
    kiir(MAX, tomb);

    return 0;
}