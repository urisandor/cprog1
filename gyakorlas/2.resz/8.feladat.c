#include <stdio.h>

int main() 
{
    int n;

    // Pozitív egész szám bekérése
    printf("Addj meg egy pozitív egész számot: ");
    scanf("%d", &n);

    // Négyzet kirajzolása
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
