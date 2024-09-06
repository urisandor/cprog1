#include <stdio.h>
#include <stdlib.h>

void feltolt(int matrix[8][8])
{
    
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            matrix[i][j] = rand() % (99 - 10 + 1) + 10;
        }
    }
}

void kiir(int matrix[8][8], int sor, int oszlop)
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        puts("");
    }

    int sor_sum = 0;
    int oszlop_sum = 0;          
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == sor)
            {
                sor_sum += matrix[i][j];
            }
            if (j == oszlop)
            {
                oszlop_sum += matrix[i][j];
            }
        }
    }
    puts("");
    printf("A %d. sorban levo szamok osszege: %d\n", sor, sor_sum);
    printf("A %d. oszlopban levo szamok osszege: %d\n", oszlop, oszlop_sum);
}

int main(int argc, char *argv[])
{
    srand(1980);
    
    int sor = atoi(argv[1]);
    int oszlop = atoi(argv[2]);

    if (argc != 3)
    {
        fprintf(stderr, "Hiba rossz parameterezes!");
        exit(1);
    }
    if (sor < 1 || sor > 7)
    {
        fprintf(stderr, "1 vagy 7 kozott kell lennie!");
        exit(1);
    }
    if (oszlop < 1 || oszlop > 7)
    {
        fprintf(stderr, "1 vagy 7 kozott kell lennie!");
        exit(1);
    }

    int matrix[8][8];
    feltolt(matrix);
    kiir(matrix, sor, oszlop);
    

    
    return 0;


}