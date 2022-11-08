//sparse matrix

// will need count rows and 3 columns
#include "stdio.h"
#include "stdlib.h"
#include "math.h"


int main()
{
    int arr[3][3] = {
        {0, 1, 0},
        {0, 0, 1},
        {0, 1, 0}
    };

    int counter = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (arr[i][j] != 0)
            {
                ++counter;
            }   
        }
    }

    if (counter <= floor(9/2))
    {
        int val = 0;
        int new_arr[][3] = {0};
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                if (arr[i][j] != 0)
                {
                    new_arr[val][0] = i;
                    new_arr[val][1] = j;
                    new_arr[val][2] = arr[i][j];
                    val++;
                }
            }
        }

        for (int i = 0; i < val; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                printf("Element: %d\n", new_arr[i][j]);
            }
            printf("\n");
        }

    }
    else{
        printf("Dense Matrix!\n");
    }
}