#include <stdio.h>
#define SIZE 50

int main()
{
    int n = 0;
    printf("Adj meg egy egesz szamot: ");
    scanf("%d", &n);

    int tomb[SIZE];
    int num = 0;
    int sum = 0;
    float avg = 0;
    int min;
    int max;
    for (int i = 0; i < n; i++)
    {
        printf("Szam: ");
        scanf("%d", &num);
        sum += num;
        tomb[i] = num;
        min = tomb[0];
        if (tomb[i] < min)
        {
            min = tomb[i];
        }
        if (tomb[i] > max)
        {
            max = tomb[i];
        }
    }
    printf("%d\n", sum);
    printf("%.2f\n", (float)sum / n);
    printf("%d\n", min);
    printf("%d\n", max);
    return 0;
}