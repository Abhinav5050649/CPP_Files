#include <bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((num >> i )/ 2);
    }
    cout << endl;
}

int main()
{
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;

    printBinary(n);
    return 0;
}