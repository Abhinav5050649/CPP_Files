#include <bits/stdc++.h>
using namespace std;

double division(int a, int b)
{
    if (b == 0)
    {
        throw "Divsion by zero!";
    }
    return (a/b);
}

int main()
{
    int n1 = 0, n2 = 0; cin >> n1 >> n2;

    try
    {
        double div = division(n1, n2);
        cout << div << endl;
    }catch(const char* av){
            cerr << av << endl;
    }

    return 0;   
}