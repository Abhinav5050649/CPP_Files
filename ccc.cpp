#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0; cin >> n;

    
    if ((n - 1) & 1 == 1)
    {
        cout << "Even number!\n";
    }
    else
    {
        cout << "Odd number!\n";
    }

    return 0;
}