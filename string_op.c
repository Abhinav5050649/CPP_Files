#include "stdio.h"
#include "string.h"

int main()
{
    char str1[20] = "Hello";
    char str2[20] = "World";

    char str3[40];
    int count = 0;
    for (int i = 0; str1[i] != '\0'; ++i, ++count)
    {
        str3[count] = str1[i];
    }

    for (int i = 0; str2[i] != '\0'; ++i, ++count)
    {
        str3[count] = str2[i];
    }

    printf("%s", str3);
    return 0;
}