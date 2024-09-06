#include <stdio.h>


void kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
}
void modosit(const int n, const int tomb[])
{
    //tomb[0] = 999;
}
void megfordito(const int n, int tomb[])
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = temp;
        i++;
        j--;
    }
}
int find_min(const int n, const int tomb[])
{
    int min = tomb[0];
    for (int i = 1; i < n; i++)
    {
        if (tomb[i] < min)
        {
            min = tomb[i];
        }
    }
    return min;
}
int main()
{

    int szamok[10] = {6, 4, 2, 5, 1, 8, 7, 3, 4, 6};
    int meret = 10;
    
    int mini = find_min(meret, szamok);
    printf("%d\n", mini);
    kiir(meret, szamok);
    modosit(meret, szamok);
    megfordito(meret, szamok);
    kiir(meret, szamok);
    return 0;
}