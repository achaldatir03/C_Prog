#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, n5, S;
    float A;
    printf("Enter any five no's : ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    S = n1 + n2 + n3 + n4 + n5;
    A = S / 5.0;
    printf("Sum of given five no's := %d", S);
    printf("\nAverage of given five no's := %f", A);
    return 0;
}