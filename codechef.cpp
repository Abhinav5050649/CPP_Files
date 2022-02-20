#include <bits/stdc++.h>
using namespace std;

void swapper(int arr[], int track, int checker)
{
    for (int i = track; i < checker; i++)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;        
    }
    
}

int main()
{
    int T = 0;
    cin >> T;
    
    while (T > 0)
    {
        T--;
        int N = 0;
        cin >> N;
        int arr[N];
        
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        
        int max = 0, track = 0, checker = 0;
        
        for (int i = 0; i < N; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                track = i;
            }
        }
        
        if ((N - 1) % 2 == 0)
        {
            checker = N - 1;
        }
        else
        {
            checker = N - 2;
        }
        
        swapper(arr, track, checker);
        
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            if (i % 2 == 0)
            {
                sum += arr[i];
            }
            else
            {
                sum -= arr[i];
            }
        }
        
        cout << sum << endl;
    }
    
    return 0;
}