#include "stdio.h"
#include "math.h"
#include "stdbool.h"
#include "stdlib.h"


void compute(int arr1[][3], int arr2[][3], int ans[][3]);

int main()
{
    int m1[3][3], m2[3][3], r[3][3];

    printf("Enter elements of matrix m1:\n");
    for (int i = 1; i <= 3; ++i)
    {
        for (int j = 1; j <= 3; ++j)
        {
            printf("Enter number [%d][%d]:", i-1, j-1);
            scanf("%d", &m1[i - 1][j - 1]);
        }
    }
    printf("\n\n\n");

    printf("Enter elements of matrix m2:\n");
    for (int i = 1; i <= 3; ++i)
    {
        for (int j = 1; j <= 3; ++j)
        {
            printf("Enter number [%d][%d]:", i-1, j-1);
            scanf("%d", &m2[i - 1][j - 1]);
        }
    }
    printf("\n\n\n");
    
    compute(m1, m2, r);

    printf("Elements of matrix r:\n");
    for (int i = 1; i <= 3; ++i)
    {
        for (int j = 1; j <= 3; ++j)
        {
            printf("%d ", r[i - 1][j - 1]);
        }
        printf("\n");
    }
}

void compute(int arr1[][3], int arr2[][3], int ans[][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            ans[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}