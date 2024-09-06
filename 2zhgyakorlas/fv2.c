#include <stdio.h>
#include <stdlib.h> 

typedef struct 
{
    int min;
    int max;
    float avg;
}Adatok;

void feltolt(int also, int felso, int tomb[], int meret)
{
    for (int i = 0; i < meret; i++)
    {
        tomb[i] = rand() % (felso - also + 1) + also;
    }
    for (int i = 0; i < meret; i++)
    {
        if (i < meret - 1)
        {
            printf("%d, ", tomb[i]);
        }
        else 
        {
            printf("%d\n", tomb[i]);
        }
    }
    puts("");
}

Adatok kiir(int tomb[], int meret)
{
    Adatok adatok;
    adatok.min = tomb[0];
    adatok.max = tomb[0];
    
    int sum = 0;

    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] < adatok.min)
        {
            adatok.min = tomb[i];
        }
        else if (tomb[i] > adatok.max)
        {
            adatok.max = tomb[i];
        }
        sum += tomb[i];
    }
    adatok.avg = (float)sum / meret;
    return adatok;
}
int main()
{
    srand(2005);
    int meret = 10;
    int tomb[meret];
    feltolt(10, 99, tomb, meret);
    Adatok adatok;
    adatok = kiir(tomb, meret);

    printf("A legkisebb elem: %d\n", adatok.min);
    printf("A legnagyobb elem: %d\n", adatok.max);
    printf("Az elemek atlaga: %.2f\n", adatok.avg);
    return 0;
}