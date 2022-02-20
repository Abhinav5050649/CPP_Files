#include <bits/stdc++.h>
using namespace std;

//Time complexity = O(n^2)
int main()
{
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    int length = str.length();  //measures length of string
    vector<char> col;  //creates of array of characters
    int count = 0;

    if (length % 2 == 0)
    {
        for (int i = 0; i < length; i++)
        {
            if (isalpha(str[i]))
            {
                str[i] = toupper(str[i]);   //Making characters of string uppercase
                col.push_back(str[i]);
                count++;
            }

        }
    }
    else{
        for (int i = 0; i < length; i++)
        {
            if (isalpha(str[i]))
            {
                str[i] = tolower(str[i]);   //Making characters of string lowercase
                col.push_back(str[i]);
                count++;
            }
        }
    }

    sort(str.begin(), str.end());
    sort(col.begin(), col.end());
    cout << "Required Output: ";
                                            //Printing string
    for (auto itr = col.begin(); itr != col.end(); itr++)
    {
        cout << *itr;                     //Prints alphabets
    }
    for (int i = (length - count) - 1; i >= 0; i--)
    {
        cout << str[i];                     //Prints other characters
    }
    cout << endl;
    return 0;
}