#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(NULL));
    int also = 0;
    int felso = 0;
    int meret = 0;
    

    printf("Hany db szamot kersz?\n");
    scanf("%d", &meret);

    printf("Also hatar: ");
    scanf("%d", &also);
   

    printf("Felso hatar: ");
    scanf("%d", &felso);
    
    int nums[meret];
    int random;
    int j;
    for (int i = 0; i < meret; i++)
    {
        do 
        {
            random = rand() % (felso - also + 1) + also;
            for (j = 0; j < i; j++) 
            {
                if (nums[j] == random) 
                {
                    break;
                }
            }
        } while (j != i);
        nums[i] = random;
    }

    int tmp = 0;
    for (int i = 0; i < meret; i++)
    {
        for (int j = 0; j < meret; j++)
        {
            if (nums[i] < nums[j])
            {
                tmp = nums[j];
                nums[j] = nums[i];
                nums[i] = tmp;
            }
        }
    }
    
    for (int i = 0; i < meret; i++)
    {
        if (i < meret - 1)
        {
            printf("%d, ", nums[i]);
        }
        else 
        {
            printf("%d\n", nums[i]);
        }
    }
    

    return 0;
}