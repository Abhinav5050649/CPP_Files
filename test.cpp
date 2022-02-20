#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    int number;
    struct node* next;
}
node;

int main()
{
    node *list = new node;
    if (list == NULL)
    {
        return -1;
    }

    cout << "Enter number of numbers: " << endl;
    int number_of_numbers = 0;
    cin >> number_of_numbers;


    node* n;
    node* tmp = list;

    for (int i = 0; i < number_of_numbers; i++)
    {
        n = new node;
        if (n == NULL)
        {
            return -1;
        }

        int some = 0;
        cin >> some;
        n->number = some;
        n->next = NULL;

        tmp ->next = n;   
    }

    for (node* temp = list; temp != NULL; temp = temp->next)
    {
        int some = temp -> number;
          
        cout << "Number: " << some << endl;
    }
    
    while (list != NULL)
    {
        node* temp = list;
        temp = list -> next;
        delete list;
        list = temp;
    }

    return 0;
}