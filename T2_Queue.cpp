#include <iostream>
using namespace std;

class queue
{
private:
    int front;
    int rear;
    int arr[5];

public:
    queue()
    {
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (rear == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        else if (isEmpty())
        {
            rear = 0;
            front = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    int dequeue()
    {
        int x;
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return 0;
        }
        else if (front == rear)
        {
            x = arr[front];
            arr[front] = 0;
            rear = -1;
            front = -1;
            return x;
        }
        else
        {
            x = arr[front];
            arr[front] = 0;
            front++;
            return x;
        }
    }

    int count()
    {
        return (rear - front + 1);
    }

    void display()
    {
        cout<<"All values  in the queue are: "<<endl;
        for(int i=0; i<5; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    queue q;
    int option, value;
    do
    {
        cout << "\n\nWhat operation do you want to perform? Select option number. Press 0 to exit." << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. isEmpty" << endl;
        cout << "4. isFull" << endl;
        cout << "5. Count" << endl;
        cout << "6. Display" << endl;
        cout << "7. Clear Screen" << endl;

        cin >> option;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enqueue operation \nEnter an item to enque in the queue" << endl;
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            cout << "Dequeue operation \nDequed Value: " << q.dequeue() << endl;
            break;
        case 3:
            if (q.isEmpty())
            {
                cout << "Queue is empty" << endl;
            }
            else
            {
                cout << "Queue is not empty" << endl;
            }
            break;
        case 4:
            if (q.isFull())
            {
                cout << "Queue is full" << endl;
            }
            else
            {
                cout << "Queue is not full" << endl;
            }
            break;
        case 5:
        cout<<"Count operation \nCount of item in the queue: "<<q.count()<<endl;
            break;
        case 6:
            cout<<"Display function called " <<endl;
            q.display();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Enter appropriate option\n";
        }
        
    } while (option != 0);
   
}