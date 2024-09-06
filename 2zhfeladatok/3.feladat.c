#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cnt1 = 0;
    int cnt2 = 0;
    int skip = 0;
    char line[1024];
    FILE *file = fopen("pi_100_000.txt", "r");
    while (fgets(line,sizeof(line),file) != NULL)
    {
        line[strlen(line) - 1] = '\0'; 

        if (skip == 0)
        {
            for (int i = 2; i < line[i] != '\0'; i++)
            {
                if(line[i] == '2')
                {
                    cnt1++;
                }else if(line[i] == '5')
                {
                    cnt2++;
                }
            }
            skip = 1;
        }
        else
        {
            for (int i = 0; i < line[i] != '\0'; i++)
            {
                if(line[i] == '2')
                {
                    cnt1++;
                }else if(line[i] == '5')
                {
                    cnt2++;
                }
            }

        }
    }

    printf("%d \n", cnt1);
    printf("%d \n", cnt2);
    if(cnt1 > cnt2)
    {
        puts(">");
    }else if (cnt1 < cnt2)
    {
        puts("<");
    }else
    {
        puts("=");
    }

    fclose(file);

    return 0;
}