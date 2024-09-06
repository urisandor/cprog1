#include <stdio.h>
#include <string.h>
#include "prog1.h"

int main()
{
    string szam = get_string("Szám: ");
    int n = 0;
    int meret = strlen(szam);

    for (int i = 0; i < meret; i++)
    {
        int csere = (szam[i] - '0');
        n = n + csere;
    }
    puts("");
    printf("A számjegyek összege: %d\n", n);
    return 0;
}