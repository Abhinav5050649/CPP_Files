#include "stdio.h"
#include "stdlib.h"

void asc(int *arr, int n);
void desc(int *arr, int n);

int main()
{
    int n = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    printf("Enter elements of array:\n");
    for (int i = 0; i < n; ++i)
    {
        printf("Element[%d]:", i + 1);
        scanf("%d", &arr[i]);
    }

    asc(arr, n);

    printf("Elements of array(in ascending order): ");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    desc(arr, n);
    printf("Elements of array(in descending order): ");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}

void asc(int *arr, int n)
{
    for (int i = 0;  i < n; ++i)
    {
        int swap = 0;
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                ++swap;
            }
        }

        if (swap == 0)
        {
            break;
        }
    }
}

void desc(int *arr, int n)
{
    for (int i = 0;  i < n; ++i)
    {
        int swap = 0;
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                ++swap;
            }
        }

        if (swap == 0)
        {
            break;
        }
    }
}