// cartisian product

#include <stdio.h>
int main(){
    int a[10], b[10],n1,n2,i;
    printf("Enter set A size : ");
    scanf("%d", &n1);
    printf("\nEnter Set B size : ");
    scanf("%d", &n2);
    printf("\nEnter Set A element : ");
    for (i = 0; i < n1; i++){
        scanf("%d", &a[i]);}
    printf("\nEnter Set B element : ");
    for (i = 0; i < n2; i++){
        scanf("%d", &b[i]);}

    printf("Cartisan product of given set\n");
    for ( i = 0; i < n1; i++)
    {
        for (int j = 0;j < n2; j++)
        {
            printf("(%d,%d)",a[i],b[j]);
    }
    }
    

}