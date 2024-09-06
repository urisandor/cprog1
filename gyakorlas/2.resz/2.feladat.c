#include <stdio.h>


int main()
{
    int szam = 0;
    printf("Adj meg egy szamot: ");
    scanf("%d", &szam);

    for (int i = 1; i <= szam; i++)
    {
        if (szam % i == 0)
        {
            printf("%d\n", i);
        }
        
    }
    
    return 0;
}