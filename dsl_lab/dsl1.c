#include <stdio.h>

int main()
{

    int a[10], b[10], c[10], size1, size2, k = 0,j=0,i;

    printf("enter the size of set a \n");
    scanf("%d", &size1);
    printf("enter the element of set a \n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the size of set b \n");
    scanf("%d", &size2);
    printf("enter the element of set b \n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < size1; i++)
    {

        for (j = 0; j < k; j++)
        {
            if (c[j] == a[i])
                break;
        }
        if (j == k) 
        {
            c[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < size2; i++)
    {
      for (j = 0; j < k; j++)
        {
            if (c[j] == b[i])
                break;
        }
        if (j == k) {
            c[k] = b[i];
            k++;
        }
    }

    printf("Union of SET A and SET B \n");
    for (int i = 0; i < k; i++)
    {
        printf("%d", c[i]);
    }
}