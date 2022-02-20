#include "bits/stdc++.h"
using namespace std;

class Queue
{
    private:
    int front, rear, Counter;
    int arr[5];

    public:
    
    Queue()
    {
        Counter = 0, front = -1, rear  = -1;
        for (int i = 0; i < 5; i++)
            arr[i] = 0;
    }

    bool isFull()
    {
        if (Counter == 5)
            return true;
        else
            return false;
    }

    bool isEmpty()
    {
        if (Counter == 0)
            return true;
        else
            return false;
    }

    int Count()
    {
        return (Counter);
    }

    void Display()
    {
        for (int i = 0; i < 5; i++)
            cout << arr[i] << " ";
        
        cout << endl;
    }
    
    void En(int n)
    {
        if (isFull())
        {
            cout << "Queue Overflow!\n";
            return;
        }
        else if (front == -1 && rear == -1)
        {
            Counter++;
            rear = 0, front = 0;
            arr[rear] = n;
        }
        else
        {
            Counter++;
            rear = (rear + 1) % 5;
            arr[rear] = n;
        }
    }

    int De()
    {
        int x;
        if (isEmpty())
        {
            cout << "Queue Underflow\n";
            return 0;
        }
        else if ((front + 1) % 5 == rear)
        {
            Counter--;
            x = arr[front];
            arr[front] = 0;
            rear = -1, front = -1;
            return x;
        }
        else
        {
            Counter--;
            x = arr[front];
            arr[front] = 0;
            front = (front + 1) % 5;
            return x;
        }
    } 
};

int main()
{
    Queue q1;

    int op, val;

    do
    {
        cout << "Enter a number between 1 to 7 to perform a queue operation. Else, press 0 to exit!\n";
        cout << "1. isFull()\n";
        cout << "2. isEmpty()\n";
        cout << "3. Enqueue()\n";
        cout << "4. Dequeue()\n";
        cout << "5. Count()\n";
        cout << "6. Display()\n";
        cout << "7. ClearScreen()\n";
        cin >> op;

        switch(op)
        {
            case 0:
                break;
            case 1:
                if (q1.isFull())
                    cout << "True\n";
                else
                    cout << "False\n";
                break;
            case 2:
                if (q1.isEmpty())
                    cout << "True\n";
                else
                    cout << "False\n";
                break;
            case 3:
                cout << "Enter value to enqueue: ";
                cin >> val;
                q1.En(val);
                break;
            case 4:
                cout << q1.De() << endl;
                break;
            case 5:
                cout << q1.Count() << endl;
                break;
            case 6:
                q1.Display();
                break;
            case 7:
                system("cls");
                break;
            default:
                cout << "Enter the correct option number!\n";
                break;
        }

    } while (op != 0);
    
    return 0;
}