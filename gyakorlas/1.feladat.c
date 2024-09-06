#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam1 = 0;
    int szam2 = 0;
    int szam3 = 0;
    printf("Adj meg egy szamot: ");
    scanf("%d", &szam1);
    printf("Adj meg egy szamot: ");
    scanf("%d", &szam2);
    printf("Adj meg egy szamot: ");
    scanf("%d", &szam3);

    if (szam1 + szam2 > szam3 && szam1 + szam3 > szam2 && szam2 + szam3 > szam1)
    {
        printf("A haromszog megalkothato!\n");
    }
    else
    {
        fprintf(stderr, "Hiba nem lehetseges oldalhosszak!\n");
    }


    return 0;
}