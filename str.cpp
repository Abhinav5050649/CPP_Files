#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    sort(s.begin(), s.end());

    cout << "Ascii order sorted: " << s << endl;

    return 0;
}