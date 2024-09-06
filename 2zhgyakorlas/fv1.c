#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void feltolt(int also, int felso, int tomb[],int meret)
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
            printf("%d ", tomb[i]);
        }
    }
}

void kiir(int tomb[], int meret, int *min, int *max, float *avg)
{
    int sum = 0;

    *min = tomb[0];
    *max = tomb[0];
    
    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] < *min)
        {
            *min = tomb[i];
        }
        else if (tomb[i] > *max)
        {
            *max = tomb[i];
        }
        sum += tomb[i];
    }
    *avg = (float)sum / meret; 
}

int main()
{
    int meret = 10;
    int tomb[meret];
    int min;
    int max;
    float avg;

    srand(time(NULL));
    feltolt(10, 99, tomb, meret);
    puts("");
    
    kiir(tomb, meret, &min, &max, &avg);

    printf("Legkisebb elem: %d\n", min);
    printf("Legnagyobb elem: %d\n", max);
    printf("Az elemek átlaga: %.2f\n", avg);


    return 0;
}