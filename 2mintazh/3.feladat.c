#include <stdio.h>
#include <stdlib.h>

#define SEED 1980

typedef struct 
{
    int min;
    int max;

}Adatok;


void feltolt(int also, int felso, int nums[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            nums[i][j] = rand() % (felso - also + 1) + also; 
        }
    }
}

void kiir(int nums[5][5])
{
    Adatok adatok;
    adatok.min = nums[0][0];
    adatok.max = nums[0][0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ",nums[i][j]);
            if (nums[i][j] < adatok.min)
            {
                adatok.min = nums[i][j];
            }
            if (nums[i][j] > adatok.max)
            {
                adatok.max = nums[i][j];
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
    

    srand(SEED);
    int nums[5][5];

    feltolt(10, 99, nums);
    kiir(nums);




    return 0;
}