#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <cstring>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        cout << "Use properly, dumbass!\n";
        return -1;
    }
    
    FILE *file = fopen(argv[1], "w");
   
    if (file == NULL)
    {
        cout << "Can't open file!\n";
        return -2;
    }

    char *str =new char[100];
    if (str == NULL)
    {
        return -1;
    }

    scanf("%[^\n]", str);

    fprintf(file, "%s", str);   

    fclose(file);

    FILE *fil2 = fopen(argv[1], "r");
    char ch;
    while ((ch = fgetc(fil2)) != EOF)
    {
        cout << ch;
    }
    fclose(fil2);
    return 0;
}