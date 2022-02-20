#include "bits/stdc++.h"
using namespace std;

class Queue
{
    private:
    int front, rear, inCounter = 0;
    int arr[5];

    public:

    Queue()
    {
        inCounter = 0;
        front = -1, rear = -1;
        for (int i = 0; i < 5; i++)
            arr[i] = 0;
    }

    int count()
    {
        return (inCounter);
    }

    void Display()
    {
        for (int i = 0 ; i < 5; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    bool isEmpty()
    {
        if (rear == -1 && front == -1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if (inCounter == 5)
            return true;
        else
            return false;
    }

    void Enqueue(int num)
    {
        if (isFull())
        {    
            cout << "Queue Overflow!\n"; 
            return;
        }
        else if (rear == -1 && front == -1)
        {
            inCounter++;
            rear = 0, front = 0;
            arr[rear] = num;
            return;
        }
        else
        {
            inCounter++;
            rear = (rear + 1) % 5;
            arr[rear] = num;
            return;
        }
    }

    int Dequeue()
    {
        int x = 0;
        if (isEmpty())
        {
            cout << "Queue Underflow!\n";
            return 0;
        }
        else if (front == rear)
        {
            inCounter--;
            x = arr[front];
            arr[front] = 0;
            front = -1, rear = -1;
            return x;
        }
        else
        {
            inCounter--;
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

    int val, op;

    do
    {
        cout << "Enter any number between 1 and 7. Else press 0 to exit!\n";
        cout << "1. isEmpty()\n";
        cout << "2. isFull()\n";
        cout << "3. Enqueue()\n";
        cout << "4. Dequeue()\n";
        cout << "5. Count()\n";
        cout << "6. Display()\n";
        cout << "7. Clearscreen()\n";
        cin >> op;

        switch(op)
        {
            case 0:
                break;
            case 1:
                cout << q1.isEmpty() << endl;
                break;
            case 2:
                cout << q1.isFull() << endl;
                break;
            case 3:
                cout << "Enter a value: ";
                cin >> val;
                q1.Enqueue(val);
                break;
            case 4:
                cout << "Dequeued Value: " << q1.Dequeue() << endl;
                break;
            case 5:
                cout << q1.count() << endl;
                break;
            case 6:
                q1.Display();
                break;
            case 7:
                system("cls");
                break;
            default:
                cout << "Enter correct option!\n";
                break;
        }

    } while (op != 0);

    return 0;   
}