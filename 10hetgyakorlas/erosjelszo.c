#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    
    srand(time(NULL));
    int n_rand = rand() % (12 - 8 + 1) + 8; 
    printf("Eros jelszo: ");  


    char nagybetuk[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
    char kisbetuk[] = "abcdefghijklmnopqrstuvwxyz"; 
    char szamok[] = "123456789"; 
    char spec[] = ".,;'"; 
    int nagy_len = sizeof(nagybetuk) - 1;
    int kis_len = sizeof(kisbetuk) - 1;
    int szamok_len = sizeof(szamok) - 1;
    int spec_len = sizeof(spec) - 1;

    int last_category = -1;
    for (int i = 0; i < n_rand; i++) 
    {
        int category;
        do
        {
            category = rand() % 4;
        } while (category == last_category);
        
        last_category = category;

        if(category == 0)
        {
            printf("%c", nagybetuk[rand() % nagy_len]);
        }
        else if (category == 1)
        {
            printf("%c", kisbetuk[rand() % kis_len]);
        }
        else if (category == 2) 
        {
            printf("%c", szamok[rand() % szamok_len]);
        } 
        else if (category == 3)
        {
            printf("%c", spec[rand() % spec_len]);
        }
    }
    puts("");


    return 0;
}