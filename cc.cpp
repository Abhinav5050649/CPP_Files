//https://codeforces.com/problemset/problem/486/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int num = 0; cin >> num;

    if (num % 2 == 0)
    {
        cout << num - (num / 2) << endl;
    }
    else
    {
        cout << -(num - (num / 2)) << endl;
    }

    return 0;
}