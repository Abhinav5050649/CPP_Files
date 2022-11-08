#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "string.h"
#include "ctype.h"
#include "math.h"
#include "stdint.h"
//Program 2 of assignment 1
/*
Programmer: Abhinav Sharma
Roll No: 21BCP134
*/
bool isPalindrome(char *str);
int occurenceOfCharacter(char *str);
bool compareTwoStrings(char *str1, char *str2);
int lengthOfString(char *str);

int main()
{
    
    int op = -1;
    do
    {
        printf("Enter\n1:isPlaindrome\n2:Occurence Of Character\n3:compareTwoStrings\n0:To exit\n");
        scanf("%d", &op);

        switch(op)
        {
            case 0:
                break;
            
            case 1:
                char *strCase1 = malloc(sizeof(char) * 20);
                printf("Enter string: ");
                scanf("%s", strCase1);

                if (isPalindrome(strCase1))
                {
                    printf("Yes!\n");
                }else{
                    printf("No\n");
                }
                free(strCase1);
                break;
            
            case 2:
                char *str = malloc(sizeof(char) * 20);
                printf("Enter string: ");
                scanf(" %s", str);
                int ans = occurenceOfCharacter(str);
                printf("Character being repeated %d times!\n", ans);
                free(str);
                break;

            case 3: 
                char *str1 = malloc(sizeof(char) * 20);
                printf("Enter string 1: ");
                scanf("%s", str1);

                char *str2 = malloc(sizeof(char) * 20);
                printf("Enter string 2: ");
                scanf("%s", str2);

                if (compareTwoStrings(str1, str2))
                {
                    printf("They are identical!\n");
                }
                else
                {
                    printf("They are not identical!\n");
                }
                free(str1);
                free(str2);
                break;

            default:
                printf("Enter proper option number!\n");
                break;
        }
        printf("\n");
    } while (op != 0);
    
    //isPalindrome
    //Occurence of character
    //Compare two strings
}

bool isPalindrome(char *str)
{
    int length = lengthOfString(str);
    for (int i = 0, n = length/2; i <= n; ++i)
    {
        if (str[i] != str[length - i - 1])
            return false;
    }

    return true;
}


int occurenceOfCharacter(char *str)
{
    int length = lengthOfString(str), counterOfCharacter = 0;
    printf("Enter character whose occurence you wish to find in string: ");
    char ch;
    scanf(" %c", &ch);

    for (int i = 0; i < length; ++i)
    {
        if (str[i] == ch)
        {
            counterOfCharacter++;
        }
    }

    return counterOfCharacter;
}

bool compareTwoStrings(char *str1, char *str2)
{
    int len1 = lengthOfString(str1), len2 = lengthOfString(str2);
    if (len1 != len2)
    {
        return false;
    }
    else
    {
        for (int i = 0 ; i < len1; ++i)
        {
            if (tolower(str1[i]) != tolower(str2[i]))
            {
                return false;
            }
        }

        return true;
    }
    
}

int lengthOfString(char *str)
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; ++i){
        ++len;
    }

    return len;
}