#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void doublyllTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

  int main()
 {
   struct Node *N1;
    struct Node *N2;
    struct Node *N3;
    struct Node *N4;
 
    // Allocate memory for nodes in the linked list in Heap
    N1 = (struct Node *)malloc(sizeof(struct Node));
    N2= (struct Node *)malloc(sizeof(struct Node));
    N3 = (struct Node *)malloc(sizeof(struct Node));
    N4 = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    N1->data = 4;
    N1->next = N2;
 
    // Link second and third nodes
    N2->data = 3;
    N2->next = N3;
 
    // Link third and fourth nodes
    N3->data = 6;
    N3->next = N4;
 
    // Terminate the list at the third node
    N4->data = 1;
    N4->next = NULL;
    
     
     doublyllTraversal(N1);
    
    N1 ->next=N2;
    N1->prev=NULL;
    
    return 0;


 }