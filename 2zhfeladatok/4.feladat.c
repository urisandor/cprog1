#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int polindrom(char* s)
{
    int i = 0;
    int j = strlen(s) - 1;
    while (i < j)
    {
        if(s[i] != s[j])
        {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}

int main()
{
    char line[1024];
    char* token;
    int szavakcnt = 0;
    int polcnt = 0;
    FILE file2 = fopen("out.txt", "w");
    FILE file = fopen("szoveg.txt", "r");
    while(fgets(line,sizeof(line),file) != NULL)
    {
        line[strlen(line) - 1] = '\0';
        token = strtok(line, " ");
        while (token != NULL)
        {
            szavakcnt++;

            if(polindrom(token))
            {
                polcnt++;
                fprintf(file2,"%s \n", token);
            }

            token = strtok(NULL, " ");
        }

    }

    printf("szavak: %d \n", szavakcnt);
    printf("polindromszavak: %d \n", polcnt);
    printf("Polindrom szavak aranya: %.1lf \n",((double)polcnt/(double)szavakcnt) * 100.0);

    fclose(file);
    fclose(file2);
    return 0;
}