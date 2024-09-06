#include <stdio.h>

/*int get_int()
{
    int szam;
    printf("Adj meg egy szamot: ");
    scanf("%d", &szam);
    return szam;
}
*/


int get_positive_int()
{
    int szam;
    printf("Adj meg egy pozitiv szamot: ");
    scanf("%d", &szam);
    while (1)
    {
        printf("Adj meg egy pozitiv szamot: ");
        scanf("%d", &szam);
        if (szam > 0)
        {
            break;
        }
    }
}
int main()
{
    int n = get_positive_int();
    printf("A beirt szam: %d\n", n);
    return 0;
}
// teglalap, negyzet, T,K fv-nyel
// math.h  ___ M_PI