#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 4, 1, 2};
    sort(v.begin(), v.end());

    for (int i  = 0; i < 4; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // string name = "xylophone";
    // sort(name.begin(), name.end());

    // cout << name << endl;
    return 0;
}