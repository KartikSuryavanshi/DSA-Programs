#include <stdio.h>
#include <stdlib.h>
 
struct stack
{
    int size;
    int top;
    int *arr;
};
 
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;//true
    }
    else
    {
        return 0;//false
    }
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;//true
    }
    else
    {
        return 0;//false
    }
}
 
int main()

    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));
 
    {
    struct stack *s; // Declare a pointer to struct stack

    // Allocate memory for the struct stack
    s = (struct stack *)malloc(sizeof(struct stack));

    // Check if the allocation was successful
    if (s == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit the program with an error code
    }
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Pushing an element manually
    s->arr[0] = 7;
    s->top++;

        // Check if stack is empty
    if(isEmpty(s)){
        printf("The stack is empty");
    }
    else{
        printf("The stack is not empty");
    }
 
    return 0;
}
