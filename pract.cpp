#include <bits/stdc++.h>
using namespace std;

class Employee
{
    private:
    string name;
    int rollNo;

    public:
    
    void setName(string Name)
    {
        name = Name;
    }

    void setrollNo(int no)
    {
        rollNo = no;
    }

    void getName()
    {
        cout << name << endl;
        return;
    }

    void getrollNo()
    {
        cout << rollNo << endl;
        return;
    }

    void Display()
    {
        cout << "Name: " << name << endl << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    string Name_of_person;
    cout << "Enter name of person: " << endl;
    cin >> Name_of_person;
    
    int roll = 0;
    cout << "Enter roll number of person: " << endl;
    cin >> roll;

    Employee emp1;
    emp1.setName(Name_of_person);
    emp1.setrollNo(roll);

    cout << "Details of person: " << endl;
    emp1.getName();
    emp1.getrollNo();

    return 0;
}