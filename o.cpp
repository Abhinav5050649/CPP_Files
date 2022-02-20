#include <bits/stdc++.h>
using namespace std;

class Animal
{
    public:
    string name;
    string company;
    int id;

    Animal(string n, string c, int i)
    {
        name = n;
        company = c;
        id = i;
    }
    void Intro()
    {
        cout << name << ", " << company << ", " << id << endl;
    }
};

class Dog : public Animal
{
    public:
    string sound;

    Dog(string n, string c, int i, string s) : Animal(name, company, id)
    {
        sound = s;
    }

    void Introduce()
    {
        cout << name << ", " << company << ", " << id << ", " << sound << endl;
    }
};

int main()
{
    Animal a1("B", "x", 1);
    a1.Intro();

    Dog d1("D", "A", 1, "Bark");
    d1.Introduce();
    
    return 0;
}