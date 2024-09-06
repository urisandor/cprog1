#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n_rand = rand() % (12 - 8 + 1) + 8; // Random length between 8 and 12
    printf("Eros jelszo: ");

    // Arrays of possible characters
    const char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char lower[] = "abcdefghijklmnopqrstuvwxyz";
    const char digits[] = "123456789";
    const char special[] = ".,;'";
    const int upper_len = sizeof(upper) - 1;
    const int lower_len = sizeof(lower) - 1;
    const int digits_len = sizeof(digits) - 1;
    const int special_len = sizeof(special) - 1;

    // To track the type of the last character
    int last_category = -1;

    for (int i = 0; i < n_rand; i++)
    {
        int category;
        do {
            category = rand() % 4; // Choose a category randomly
        } while (category == last_category); // Ensure it's different from the last category

        last_category = category; // Update the last category

        // Print a character based on the chosen category
        if (category == 0) {
            printf("%c", upper[rand() % upper_len]);
        } else if (category == 1) {
            printf("%c", lower[rand() % lower_len]);
        } else if (category == 2) {
            printf("%c", digits[rand() % digits_len]);
        } else {
            printf("%c", special[rand() % special_len]);
        }
    }
    puts("");

    return 0;
}
