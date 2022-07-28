#include "stdio.h"
#include "string.h"
#include "math.h"
#include "stdint.h"
#include "stdlib.h"
#include "string.h"

void reverse(char *str);

int main()
{
    char str[20];
    printf("Enter string: ");
    scanf("%s", str);

    reverse(str);
    
    return 0;
}

void reverse(char *str)
{
    for (int n = sizeof(str)/sizeof(char), i = n - 1; i >= 0; --i)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}