#include<stdio.h>
int main(){
    int a;
    int b;
    int choice;
    do
    {
        printf("enter a number");
        scanf("%d", &a);
        printf("enter second number");
        scanf("%d", &b);
        mul(a, b);
        // printf("choice : y/n\n");
        // scanf("%d", &choice);
 } while (1);
   
   
}
void mul(int a,int b){
    int e;
    e = a * b;
    printf("%d", e);
}