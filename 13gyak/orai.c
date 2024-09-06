#include <stdio.h>
#include <stdlib.h>

//qsort   (stdlib.h)
/*
    - barmely tipusra helyes
    - 
*/

int cmp(const void* bal, const void* jobb)
{
    const int *a =/*(const int*) - opcionalis*/bal;
    const int *b = jobb;
    // ha *a > *b akkor adjon vissza egy pozitiv erteket
    // ha *a == *b akkor 0 adunk vissza 
    // ha *a < *b akkor negativ erteket adunk vissza
    return *a - *b;
}
int main()
{
    int meret = 5;
    int szamok[] = {88, 56, 100, 2, 25};
    for (int i = 0; i < 5; i++)
    {
        printf("Elotte: %d \n", szamok[i]);
    }
    puts("");
    qsort(szamok, meret, sizeof(int), cmp);
    for (int i = 0; i < 5; i++)
    {
        printf("Utana: %d \n", szamok[i]);
    }
    
    return 0;
}