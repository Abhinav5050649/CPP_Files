#include "stdio.h"
#include "math.h"
#include "stdbool.h"
#include "stdlib.h"
#include "string.h"

void pattern(int n);

int main()
{
    int num = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    pattern(num);

    return 0;
}

void pattern(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        int count = 1, flag = 1;

        printf("\t");
        for (int j = 1, n = i; j <= 2*i - 1; ++j)
        {
            if (j < n && flag == 1)
            {
                printf("%d ", count);
                count += 2;
            }
            else if (j == n && flag == 1)
            {
                printf("%d ", count);
                flag = 0;
            }
            else if (flag == 0)
            {
                count -= 2;
                printf("%d ", count);
            }
        }

        printf("\n");
    }
}