#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"
#include "stdbool.h"

typedef struct stack
{
    int top;
    char *arr;
}
stack;

void initialise(stack* st, int size)
{
    st->arr = malloc(sizeof(char) * size);
    st->top = -1;
}

bool isEmpty(stack* st)
{
    if (st->top == -1)  return false;
    else    return true;
}

void push(stack *st, char ch)
{
    if (isEmpty(st))
    {
        st->arr[++st->top] = ch;
    }
    else 
    {
        if ((precedence(st->arr[st->top]) <= precedence(ch)) && (ch != '^' || ch != '$'))
        {
            while (precedence(ch) <= precedence(st->arr[st->top]) || (!isEmpty(st)))
            {
                char chs = pop(st);

            }
        }
    }
}

int precedence(char ch)
{
    if (ch == '(' || ch ==')')  return 4;
    else if (ch == '^' || ch == '$')    return 3;
    else if (ch == '/' || ch =='*') return 2;
    else if (ch == '+' || ch == '-')    return 1;
}

char pop(stack* st)
{
    if (isEmpty(st))
    {
        return '\0';
    }else{
        char ch = st->arr[st->top--];
        return ch;
    }
}

int main()
{

    return 0;
}