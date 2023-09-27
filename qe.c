#include <stdio.h>
int main()
{
    int ra, pa, d = 0;
    printf("Enter Recovery Amount : ");
    scanf("%d", &ra);
    if (ra >= 5000)
    {
        d = (ra * 5) / 100;
    }
    pa = ra - d;
    printf("\nCongrats you have discount := %d", d);
    printf("\nPayable amount is := %d", pa);
    return 0;
}
