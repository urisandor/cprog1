#include <stdio.h>


int main()
{
    float num1 = 0;
    float num2 = 0;

    printf("Adj meg float szamot: ");
    scanf("%f", &num1);
    printf("Adj meg float szamot: ");
    scanf("%f", &num2);

    if (num1 > num2)
    {
        printf("%.3f a nagyobb szam.\n", num1);
    }
    else
    {
        printf("%.3f a nagyobb szam.\n", num2);
    }

    return 0;
}