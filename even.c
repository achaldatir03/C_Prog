#include <stdio.h>
int main()
{
    int i = 2, s =1;
    do
    {
        if (i % 2 == 1)
            s = s + i;
        i++;
    } while (i <= 50);
    printf("\n Sum of even numbers is=%d", s);
    return 0;
}