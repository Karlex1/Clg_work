#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int top;
int arr[SIZE];
void Show();
void push();
void pop();

int main()
{
    int choice;

    while (1)
    {
        printf("Enter the spefic no to perform following operation: \n");
        printf("1- Push(enter the element)\n2-Pop(delete)\n3-Show\n4-Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();break;
        case 3:
            Show();break;
        case 4:
            exit(0);
        default:
            break;
        }
    }
}

void push()
{
    int x;
    if (top == SIZE)
    {
        printf("overflow! stack is full...");
    }
    else
    {
        printf("\n Enter the number you want to add in stack : ");
        scanf("%d", &x);
        arr[++top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow! stack is empty...\n");
    }
    else
    {
        printf("Popped element: %d\n", arr[top]);
        top--;
    }
}

void Show()
{
    if (top == -1)
    {
        printf("Underflow!");
    }
    else
    {
        printf("Your stack\n");

        for (int j = top; j >=0; --j)
        {
            printf("%d\n",arr[j]);
        }
    }
}