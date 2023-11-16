#include<stdio.h>
#include<stdlib.h>

// code for creating a node which have data and pointer for next node
struct  node
{
   int data;
   struct node *next;
};
// 
// struct node *p = (struct node *)malloc(sizeof(struct node *));

// display function
void display(struct node *p){
    printf("Display The Link List:\n");
    if (p)
    {
        do
        {
            printf("data: %d ,\n next at: %d\n", p->data,p->next);
            p = p->next;
        } while (p);
    }
    else
        printf("Linked List is empty.");
}
int main(){
    struct node *node1 = NULL;
    struct node *node2 = NULL;
    struct node *node3 = NULL;
    struct node *node4 = NULL;

    node1 = (struct node *)malloc(sizeof(struct node *));
    node1->data = 19;
    node2 = (struct node *)malloc(sizeof(struct node *));
    node2->data = 38;
    node3 = (struct node *)malloc(sizeof(struct node *));
    node3->data = 67;
    node4 = (struct node *)malloc(sizeof(struct node *));
    node4->data = 6;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    if (node1)
    {
        display(node1);
        free(node1);
        free(node2);
        free(node3);
        free(node4);

    }
    
}