#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 10000

int isStrongPassword(char *password) 
{
    int kisbetu = 0, nagybetu = 0, szamjegy = 0, speckarakter = 0;

    for (int i = 0; password[i] != '\0'; i++) 
    {
        char ch = password[i];
        if (islower(ch))
            kisbetu = 1;
        else if (isupper(ch))
            nagybetu = 1;
        else if (isdigit(ch)) 
        {
            szamjegy++;
        }
        else if (ch == '.' || ch == ',' || ch == ':' || ch == ';')
            speckarakter = 1;
    }

    return (kisbetu && nagybetu && (szamjegy >= 2) && speckarakter);
}

int main(int argc, char *argv[]) 
{
    if (argc != 2) 
    {
        fprintf(stderr, "Hiba, rossz parameterezés!\n");
        exit(1);
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) 
    {
        perror("Hiba");
        exit(1);
    }

    char tomb[SIZE];
    int strongPasswordsCount = 0;

    while (fgets(tomb, SIZE, fp) != NULL) 
    {
        if (isStrongPassword(tomb))
            strongPasswordsCount++;
    }

    printf("Az erős jelszavak száma: %d\n", strongPasswordsCount);

    fclose(fp);
    return 0;
}
