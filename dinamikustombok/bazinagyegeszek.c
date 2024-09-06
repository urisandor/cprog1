#include <stdio.h>
#include <stdlib.h>

#define SIZE 3000000

int compare(const void *a, const void *b) 
{
    const int *c = a;
    const int *d = b;
    
    return *c - *d;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr,"Hiba rossz parameterezes!");
        exit(1);
    }
    
    int *p = malloc(SIZE * (sizeof(int)));

    FILE *fp = fopen(argv[1], "r");

    char tomb[SIZE];
    int index = 0;

    while (fgets(tomb, SIZE, fp))
    {
        p[index] = atoi(tomb);
        index++;
    }

    qsort(p, SIZE, sizeof(int), compare);

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", p[i]);
    }


    free(p);
    return 0;
}