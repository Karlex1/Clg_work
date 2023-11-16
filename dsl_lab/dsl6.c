#include <stdio.h>

int main()
{
    int a[5] = {1, 0, 1, 0, 1};
    int b[5] = {0, 1, 1, 0, 0};

    // and truth table

    printf("Truth table of AND\n");
    for (int i = 0; i < 5; i++)
    {
        int d[5];
        d[i] = (a[i] & b[i]);
        printf("%d AND %d : %d\n", a[i], b[i], d[i]);
    }

    // or truth table

    printf("Truth table of OR \n");
    for (int i = 0; i < 5; i++)
    {
        int d[5];
        d[i] = (a[i] || b[i]);
        printf("%d OR %d : %d\n", a[i], b[i], d[i]);
    }

    // NOT Truth table

    printf("Truth table of NOT \n");
    for (int i = 0; i < 5; i++)
    {
        int d[5];
        d[i] = !(a[i]);
        printf("!%d  : %d\n", a[i], d[i]);
    }
}