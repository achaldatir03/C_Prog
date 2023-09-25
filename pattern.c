#include <stdio.h>
int main()
{
    int i, j;
    printf("\n\n\n Given diagram: \t\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" * \t ");
        }
        printf("\n");
    }
    return 0;
}