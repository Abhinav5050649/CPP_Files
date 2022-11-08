#include "stdio.h"

int fib(int n)
{
    if (n == 0) 
        return 0;
    else if (n ==1)  
        return 1;
    else 
        return (fib(n - 1) + fib(n - 2));
}

int main()
{
    printf("Enter n terms of fibonacci sequence: ");
    int nthTerm = 0;
    scanf("%d", &nthTerm);
    for (int i = 0; i < nthTerm; ++i)
    {
        printf("%d ", fib(i));
    }
    printf("\n");
    return 0;
}