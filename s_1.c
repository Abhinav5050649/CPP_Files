#include "stdio.h"
#include "string.h"

int len(char s[]){
    int n = 0;
    for(int i=0;s[i]!='\0';i++){
        n++;
    }
    return n;
}

void rc(char s[],char c,int n){
    
    printf("Re-string is: ");
    for (int i = 0; i < n; ++i)
    {
        //skips same character
        if (s[i] == c)
        {
            continue;
        }else{
            printf("%c", s[i]);
        }
    }
}

/*
Here, I have made the necessary changes to make the program work
You can improve this program by making sure that skipping of alphabets happens 
without considering the case of the alphabets, i.e., whether or not
the character is in uppercase or lowercase. For now, I havent done that.
If you want, I can get it done.

Anyways, have fun.

*/
int main()
{
    char str[100];
    char ch;

    printf("Enter string: ");
    scanf("%s", str);
    int length=len(str);

    printf("Enter character to be removed: ");
    scanf(" %c",&ch);

    rc(str,ch,length);

    return 0;
}
