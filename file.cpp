#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> var = {"Hi" , "Hello" , "Up"};

    for (auto itr = var.begin(); itr != var.end(); itr++)
    {
        cout << *itr << " ";
    } 
    cout << endl;
    
    for (auto itr = var.begin(); itr != var.end(); itr++)
    {
        if (*itr == "Hello")
        {
            *itr = "Hello1";
            break;
        }
    }

    for (auto itr = var.begin(); itr != var.end(); itr++)
    {
        cout << *itr << " ";
    } 
    cout << endl;
    return 0;
}