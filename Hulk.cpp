#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "I hate ", s2 = "I love ", s3 = "that ", s4 = "it ";
    int num = 0; cin >> num;
    map<int , string> m;
    m[1] = s1, m[2] = s2, m[3] = s3, m[4] =s4;
    
    int cnt = 1;
    for (int i = 1; i <= num; i++)
    {
        if (cnt > 3)
        {
            cnt = 1;
            cout << m[cnt];
        }
        cout << m[cnt];
        cnt += 2;
    }
    cout << m[4] << endl;
    return 0;
}