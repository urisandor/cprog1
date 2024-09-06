#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

typedef struct
{
    int min;
    int max;
    int avg;

}Point;

void stats(int also, int felso)
{
    int nums[SIZE];
    int ossz;
    Point num;
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
    num.min = nums[0];
    num.max = nums[0];
    for (int i = 0; i <= 9; i++)
    {
        if (nums[i] < num.min)
        {
            num.min = nums[i];
        }
        if (nums[i] > num.max)
        {
            num.max = nums[i];
        }
        ossz = nums[i] + ossz;
    }
    num.avg = ossz / SIZE;
    
    printf("MIN: %d\n", num.min);
    printf("MAX: %d\n", num.max);
    printf("AVG: %d\n", num.avg);
}

int main()
{
    srand(time(NULL));
    stats(10, 99);
    
    return 0;
}