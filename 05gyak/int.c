#include <stdio.h>
#include "prog1.h"

int get_int(string prompt)
{
    printf("%s", prompt);
    int n = 0;
    scanf("%d", &n);
    return n;
}
int main()
{

    //int x = get_int("Szam: ");
    //printf("A megadott szam : %d\n", x);

    int ev = get_int("Hany eves vagy? ");
    printf("Te akkor most %d eves vagy", ev);
    return 0;
}