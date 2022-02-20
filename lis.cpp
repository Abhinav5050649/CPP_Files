#include <bits/stdc++.h>
using namespace std;

class Animal
{
    public:
    string name;
    int number;

    void Intro(string n)
    {
        name = n;
        cout << name << endl;
    }

    void Intro(int n)
    {
        number = n;
        cout << number << endl;
    }

    void Intro(string nam, int num)
    {
        name = nam;
        number = num;
        cout << "Name: " << name << endl << "Number: " << number << endl;
    }
};

int main()
{
    Animal a1;
    a1.Intro("abhinav");
    a1.Intro(1);
    a1.Intro("Abhinav", 1);

    return 0;
}