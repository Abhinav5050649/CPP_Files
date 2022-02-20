#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    int number;
    struct node* next;
}node;

int main()
{
    node *list = new node;
    if (list == NULL)
    {
        return -1;
    }

    node *n, *temp;

    int z = 0; cout << "Enter number of iterations: " << endl; cin >> z;
    int i = 0;
    for (temp = list; i < z; i++, temp = temp -> next)
    {
        n = new node;
        if (n == NULL)
        {
            return -1;
        }

        cout << "ENter number: ";
        cin >> n->number;
        n-> next = NULL;

        temp = n;
    } 
    delete n;
    list = temp;

    int sum = 0;
    for (node* tmp = temp; tmp != NULL; tmp = tmp-> next)
    {
        sum += tmp->number;
    }

    cout << "Sum is equals to " << sum << endl;

    while (list != NULL)
    {
        node* tmp = list;
        tmp = list -> next;
        delete list;
        list = tmp;
    } 

    return 0;
}