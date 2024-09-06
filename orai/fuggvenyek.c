#include <stdio.h>

/*Alprogram
    -eljaras
    -fuggveny
 Snake_case
*/
//||--fv.visszateritesi erteke, a tipusa
// (int n)-- formalis paramerlista
int duplaz(int n)//fej  || szignatura || prototipus
{
    return 2 * n;
}
int my_abs(int n)
{
    if (n < 0)
    {
        return n * -1;
    }
    return n * 1;
}
int main()
{
    int result = my_abs(-7); // (6)-argumentumok|| aktualis paramerlista
    printf("%d\n", result);

    return 0;
}