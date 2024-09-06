#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int min;
    int max;
}Adatok;

void general(int numbers[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            numbers[i][j] = rand() % (99 - 10 + 1) + 10;
            
        }
        
    }
    
}

void kiir(int numbers[5][5])
{
    Adatok adatok;
    adatok.min = numbers[0][0];
    adatok.max = numbers[0][0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ",numbers[i][j]);
            if (numbers[i][j] < adatok.min)
            {
                adatok.min = numbers[i][j];
            }
            if (numbers[i][j] > adatok.max)
            {
                adatok.max = numbers[i][j];
            }
        }
        puts("");
    }
    puts("");
    printf("A legkisebb elem: %d\n", adatok.min);
    printf("A legnagyobb elem: %d\n", adatok.max);
}

int main()
{
    srand(1980);

    int numbers[5][5];
    general(numbers);
    kiir(numbers);

    return 0;
}