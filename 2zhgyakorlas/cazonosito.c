#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "prog1.c"

typedef char * string;

int is_valid_c_identifier(const char* input)
{

    if (isdigit(input[0]))
    {
        return 0;
    }
    else  
    {
        for (int i = 0; i < strlen(input); i++)
        {
            if (!islower(input[i]) && !isupper(input[i]) && !isdigit(input[i]) && !input[i] != '_')
                return 0;
        }
        
    }
    return 1;
   
    
}

int main()
{
    
    int result;
    printf("Adj meg egy stringet '*' vegjelig!\n");
    while (1)
    {
        string az = get_string("Input: ");
        if (strlen(az) == 1 && az[0] == '*')
        {
            break;
        }
        else 
        {
            result = is_valid_c_identifier(az);
            if (result == 1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
       
    }
    
    


    return 0;
}