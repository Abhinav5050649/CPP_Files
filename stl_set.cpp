#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Set is a data type used to store unique copy of every element in a sorted order
    
    // set<int> s; //set of integers
    // set<string> s1; //set of strings

    // s.insert(10);
    // s.insert(15);

    // cout << s.count(10) << endl;
    // cout << s.count(9) << endl;     //all elements in a set are arranged in sorted order
    // cout << s.count(11) << endl;
    // cout << s.count(15) << endl;

    // cout << s.size() << endl;
    // s.erase(10);

    // cout << s.count(10) << endl;

    set<int> s;
    s.insert(1);
    s.insert(0);
    s.insert(-1);

    cout << *s.begin() << " " << *s.begin() + 1 << endl;

    s.insert(12);

    cout << s.count(12) << endl;
    s.erase(12);
    cout << s.count(12) << endl;
    
    s.clear();
    
    return 0;
}