#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Hiba! Rossz parameterezes!");
        exit(1);
    }
    
    int num1 = argv[1][0];
    int num2 = argv[2][0];
    int cnt_num1 = 0;
    int cnt_num2 = 0;

    FILE *fp = fopen("pi_100_000.txt", "r");
    char line[1024];
    int skip = 0;
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        line[strlen(line) - 1] = '\0'; 
        
        if(skip == 0)
        {    
            for (int i = 2; i < line[i] != '\0'; i++)
            {
                if (line[i] == num1)
                {
                    cnt_num1++;
                }
                else if (line[i] == num2)
                {
                    cnt_num2++;
                }
            }
            skip = 1;
        }
        else
        {
            for (int i = 0; i < line[i] != '\0'; i++)
            {
                if (line[i] == num1)
                {
                    cnt_num1++;
                }
                else if (line[i] == num2)
                {
                    cnt_num2++;
                }
            }
        }
    }
    
    printf("%d elofordulasa a fajlban: %d\n", num1, cnt_num1);
    printf("%d elofordulasa a fajlban: %d\n", num2, cnt_num2);

    if(cnt_num1 > cnt_num2)
    {
        puts(">");
    }else if (cnt_num1 < cnt_num2)
    {
        puts("<");
    }else
    {
        puts("=");
    }
    puts("");
    fclose(fp);
    return 0;
}