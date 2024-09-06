#include <stdio.h>


void kiir(int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
}
int array_sum(int n, int tomb[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = tomb[i] + sum;
    }
    return sum;
}

double array_avg(int n, int tomb[])
{
    
    return (double)array_sum(n,tomb) / (double)n;
    
    /*int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = tomb[i] + sum;
    }
    
    return (double)sum / (double)n;*/
}
int main()
{

    int szamok[10] = {6, 4, 2, 5, 1, 8, 7, 3, 4, 6};
    int meret = 10;
    
    kiir(meret, szamok);
    int osszeg = array_sum(meret, szamok);
    printf("Az elemek osszege: %d\n", osszeg);
    printf("Az elemek atlaga: %lf\n",array_avg(meret, szamok));
    return 0;
}