#include <stdio.h>
#include <math.h>

int main()
{
    int sum = 0;
    int sum2 = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + pow(i,2);
        sum2 = sum2 + i;
    }
    sum2 = pow(sum2,2);
    int ossz = sum2 - sum;
    printf("%d - %d = %d\n", sum2, sum, ossz);
    return 0;
}