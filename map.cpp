#include <bits/stdc++.h>
using namespace std;

int main()
{   
    // //map declaration --> map<key_datatype, value_datatype>
    // map<int, int> m;
    // m[1] = 1;
    // m[2] = 2;

    // cout << m.size() << endl;
    // m[15];   // here, this didn't exist before. And so, on declaring, this initialises hte key's value to zero

    // cout << m[15] << endl;
    // //In maps, keys are sorted in lexicographical order
    // cout << m[1] << " " << m[2] << endl;

    // // //clearing a map --> m.clear();

    // map<int, int> m;

    // m[10]++;
    // m[10]++;

    // cout << m[10] << " " << m[4] << endl;

    map<string, int> freq;
    int n ;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (freq[s] == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << s << freq[s] << endl;
        }
        freq[s]++;
    }
    return 0;
}