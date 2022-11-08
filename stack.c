#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"
#include "stdbool.h"

typedef struct stack
{
    int size;
    int front;
    int rear;
    int *arr;
}
stack;

void initialise(stack* st, int size)
{
    st->size = size;
    st->front = 0;
    st->rear = 0;
    st->arr = malloc(sizeof(int) * size);

    for (int i = 0; i < size; ++i)
    {
        st->arr[i] = INT_MIN;
    }
}

bool isEmpty(stack* st)
{
    if (abs(st->front - st->rear) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int top(stack* st)
{   
    if (isEmpty(st))
    {
        return INT_MIN;
    }
    else
    {
        return st->arr[st->front];
    }
}

void traverse(stack* st)
{
    printf("Stack elements: ");

    for (int i = st->front; i < st->rear; ++i)
    {
        if (st->arr[i] != INT_MIN)
        {
            printf("%d ", st->arr[i]);
        }
    }
    printf("\n");
}

// need to work on push command
void push(stack *st, int number_to_push)
{
    if (st->rear == st->size)
    {
        printf("Stack Overflow!\n");
        return;
    }
    else
    {   
        st->arr[st->rear] = number_to_push;
        st->rear++;
        return;
    }
}

int pop(stack* st)
{
    if (isEmpty(st))
    {
        printf("Stack Underflow!\n");
        return 0;
    }
    else
    {
        int temp = st->arr[st->front];
        st->arr[st->front] = INT_MIN;
        st->front++;

        if (st->front == st->rear && st->arr[st->rear] == INT_MIN)
        {
            st->front = 0, st->rear = 0;
        }
        return temp;
    }
}

int count(stack *st)
{
    return abs(st->front - st->rear);
}

int main()
{
    stack *s1 = malloc(sizeof(stack));
    int size = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);

    initialise(s1, size);
    int op = -1;
    do
    {
        printf("Enter\n1: Push\n2: Pop\n3: isEmpty\n4: Traverse\n5: Count\n6: Top\n0: Exit\n\n");
        scanf("%d", &op);

        switch (op)
        {
            case 0:
                break;

            case 1:
                int num_to_push = 0;
                printf("Enter number to push: ");
                scanf("%d", &num_to_push);
                push(s1, num_to_push);
                break;

            case 2:
                int popped_value = pop(s1);
                printf("Popped value == %d\n", popped_value);
                break;
            
            case 3:
                (isEmpty(s1)) ? printf("Empty!\n") : printf("Not Empty!\n");
                break;

            case 4:
                traverse(s1);
                break;
            
            case 5:
                printf("Elements in stack: %d\n", count(s1));
                break;
            
            case 6:
                (isEmpty(s1)) ? printf("Empty Stack!!!\n") : printf("Top value: %d\n", top(s1));
                break;

            default:
                break;
        }
        /* code */
        printf("\n\n");
    } while (op != 0);
    
    free(s1);
    return 0;  
}