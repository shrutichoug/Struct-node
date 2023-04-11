#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*next;
};

int main()

{
    struct node*newnode1 = (struct node*)malloc(sizeof(struct node));
    struct node*newnode2 = (struct node*)malloc(sizeof(struct node));
    newnode1->data=10;
    newnode1->next=newnode2;
    newnode2->data=20;
    newnode2->next=NULL;

    printf("data = %d selfadder = %u nextadder = %u\n", newnode1->data, newnode1, newnode1->next);
    printf("data = %d selfadder = %u nextadder = %u\n", newnode2->data, newnode2, newnode2->next);

    return 0;
}
