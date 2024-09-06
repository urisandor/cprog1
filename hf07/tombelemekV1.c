#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void stats(int also, int felso)
{
    int nums[SIZE];
    int ossz;
    int *p;
    for (int i = 0; i <= 9; i++)
    {
        int veletlen = rand();
        int intervalum = felso - also + 1;
        veletlen = veletlen % intervalum;
        veletlen = also + veletlen;
        nums[i] = veletlen;
        if (i < 9)
        {
            printf("%d, ", nums[i]);
        }
        else 
        {
            printf("%d\n", nums[i]);
        }
    }
    int min = nums[0];
    int max = nums[0];
    for (int i = 0; i <= 9; i++)
    {
        if (nums[i] < min)
        {
            min = nums[i];
        }
        if (nums[i] > max)
        {
            max = nums[i];
        }
        ossz = nums[i] + ossz;
    }
    ossz = ossz / SIZE;
    p = &min;
    int validmin = *p;
    printf("MIN: %d\n", validmin);
    p = &max;
    int validmax = *p;
    printf("MAX: %d\n", validmax);
    p = &ossz;
    int validavg = *p;
    printf("AVG: %d\n", validavg);
}

int main()
{
    srand(time(NULL));
    stats(10, 99);
    return 0;
}