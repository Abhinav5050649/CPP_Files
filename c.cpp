#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> m;
    m['0'] = 0, m['1'] = 0;
    
    int T = 0; 
    cin >> T;
    
    while (T > 0)
    {
        int n = 0;
        cin >> n;
        char str[200];
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            m[str[i]]++;
        }
        
        if (m['0'] == 0 || m['1'] == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int n0 = m['0'];
            int n1 = m['1'];
            
            if ((n0 == n1))
            {
                cout << n0 - 1<< endl;
            }
            else 
            {
                if ((n0 < n1) && (n0 % 2 ==0))
                {
                    cout << n0 << endl;
                }
                else if ((n0 < n1) && (n0 % 2 !=0))
                {
                    cout << n0 - 1 << endl;
                }
                else if ((n1 < n0) && (n1 % 2 ==0))
                {
                    cout << n1 << endl;
                }
                else if ((n1 < n0) && (n1 % 2 != 0))
                {
                    cout << n1 - 1 << endl;
                }
            }
        }
        m['0'] = 0;
        m['1'] = 0;
        T= T - 1;
    }
    m.clear();
    return 0;
}