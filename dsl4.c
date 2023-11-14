#include <stdio.h>

int main()
{
    int a[10], b[10], d[10], n, m, k , j = 0, flag,i;

    printf("enter the size of set a \n");
    scanf("%d", &n);
    printf("enter the element of set a \n");
    for (i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the size of set b \n");
    scanf("%d", &m);
    printf("enter the element of set b \n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    k = 0;
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            d[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < m; i++)
    {
        flag = 0;
        for (j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            d[k] = b[i];
            k++;
        }
    }

    printf("\n(A-B)U(B-A)\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", d[i]);
    }
}

// #include <stdio.h>
// int a[10], b[10], c[10], d[10], i, j, k = 0, n, m, flag = 0;

// void symmetric_diff()
// {
//     k = 0;
//     for (i = 0; i < n; i++)
//     {
//         flag = 0;
//         for (j = 0; j < m; j++)
//         {
//             if (a[i] == b[j])
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             d[k] = a[i];
//             k++;
//         }
//     }
//     for (i = 0; i < m; i++)
//     {
//         flag = 0;
//         for (j = 0; j < n; j++)
//         {
//             if (b[i] == a[j])
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             d[k] = b[i];
//             k++;
//         }
//     }

//     printf("\n(A-B)U(B-A)\n");
//     for (i = 0; i < k; i++)
//     {
//         printf("%d ", d[i]);
//     }
// }
// int main()
// {
//  printf("Enter the size of array A\n");
//  scanf("%d",&n);
//  printf("Enter the element of First array A\n");
//  for(i=0;i<n;i++)
//  {
//         scanf("%d", &a[i]);
//  }
//  printf("Enter the size of array B\n");
//  scanf("%d",&m);
//  printf("Enter the elements of array B\n");
//  for(j=0;j<m;j++)
//  {
//         scanf("%d", &b[j]);
//  }
//  symmetric_diff();
//  printf("\n");
//  return 0;
// }