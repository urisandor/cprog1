#include <stdio.h>
#include <string.h>

#define SIZE 5

int main()
{

    char text[SIZE];
    printf("Neved: ");
    fgets(text, SIZE, stdin);
    //hf if bele rakni
    text[strlen(text) - 1] = '\0';
    printf("Hello %s!\n", text);
    return 0;
}