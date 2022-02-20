#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T = 0, H = 0, B = 0; cin >> T >> H;

    while (T--)
    {
        int num = 0; cin >> num;
        if (num > H)
        {
            B += 2;
        }
        else
        {
            B += 1;
        }
    }

    cout << B << endl;
    return 0;
}