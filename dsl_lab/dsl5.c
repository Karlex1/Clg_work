// powerset
#include <stdio.h>
#include <math.h>
void printpowerset(char *set, int set_size)
{
int pow_set_size = pow(2, set_size);
    int counter, j;
    for (counter = 0; counter < pow_set_size; counter++)
    {
        for (j = 0; j < set_size; j++)
        {
            if (counter & (1 << j))
            {
                printf("%c", set[j]);
            }
        }
        printf("\n");
    }
}
int main()
{
    char set[] = {'w', 'r', 'v'};
    printpowerset(set, 3);
    return 0;
}

