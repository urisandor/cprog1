#include <stdio.h>

int main() 
{
    printf("Az elso 100 primszam:\n");

    for (int i = 2; i <= 100; i++) 
    {
        int is_prime = 1;
        for (int j = 2; j < i; j++) 
        {
            if (i % j == 0) 
            {
                is_prime = 0;
                continue;
            }
        }
        if (is_prime) 
        {
            printf("%d \n", i);
        }
    }

    return 0;
}