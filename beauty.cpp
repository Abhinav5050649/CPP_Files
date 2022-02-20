//https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5] = {0};

    int tracker_x = 0, tracker_y = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                tracker_x = i, tracker_y = j;
            }
        }
    }

    int steps = abs(tracker_x - 2) + abs(tracker_y - 2);

    cout << steps << endl;
    return 0;
}