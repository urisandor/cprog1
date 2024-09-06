#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "prog1.h"

int jelszo(string s)
{
    int kisbetus = 0;
    int nagybetus = 0;
    int szam = 0;

    for (int i = 0; i < s[i]; i++)
    {
        char c = s[i];
        if(strlen(s) >= 8)
        {
            if(isdigit(c))
            {
                szam = 1;
            }
            else if(islower(c))
            {
                kisbetus = 1;
            }
            else if(isupper(c))
            {
                nagybetus = 1;
            }
        }
    }

    return kisbetus && nagybetus && szam;
}

int main()
{
    while(1)
    {
        string s = get_string("Jelszó: ");

        if (strlen(s) == 1 && s[0] == '*')
        {
            break;
        }
        if(jelszo(s))
        {
            puts("Erős jelszó.");
        }
        else
        {
            puts("Gyenge jelszó.");
        }
    }

    return 0;
}