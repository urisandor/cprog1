#include <stdio.h>

int main(){

    

    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");    
        }
        printf("\n");
        
    }
   
    /*for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    */
    /*int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int szokozok = n-i;
        int teglak = i;
        for (int j = 0; j < szokozok; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < teglak; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    */


    
    return 0;
}