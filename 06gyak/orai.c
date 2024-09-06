#include <stdio.h>
#include <string.h>
#include "prog1.h"
#define SIZE 26

void feltolt(char tomb[])
{
    for (int i = 0; i < SIZE; i++)
    {
        tomb[i] = 'a' + i; 
    }
}

int main(){

    char abece[SIZE];
    feltolt(abece);

    for (int i = 0; i < SIZE; i++)
    {
        printf("%c ", abece[i]);
    }
    puts("");

    printf("%s \n", abece);

    return 0;
}