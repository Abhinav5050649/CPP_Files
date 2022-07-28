#include "stdio.h"
#include "math.h"
#include "stdbool.h"
#include "stdlib.h"

bool isPrime(int num);

int main()
{
    int size = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));

    for (int i = 0; i < size; ++i)
    {
        printf("Enter number ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in array: ");
    for (int i = 0; i < size; ++i)
    {
        int num = arr[i];
        if (isPrime(num))
        {
            printf("%d ", num);
        }
    }
    printf("\n");

    free(arr);

    return 0;
}

bool isPrime(int num)
{
    int count = 0;

    if (num == 1 || num == 0)
    {
        return false;
    }

    for (int i = 1, n = sqrt(num); i <= n; ++i)
    {
        if (num % i == 0)
        {
            ++count;
        }
    }

    if (count > 1)
    {
        return false;
    }else{
        return true;
    }
}