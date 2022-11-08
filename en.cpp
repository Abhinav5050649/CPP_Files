#include <iostream>
using namespace std;

int main()
{
    int a[2] = {1, 2};
    a[2] = 3;
    a[3] = 7;
    cout << "3rd element: " << a[2] << "\n";
    cout << sizeof(a) << endl;

    for (int i = 0; i <= 3; ++i)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}