#include<iostream>
using namespace std;

class Queue 
{
    int arr[50];
    int rear, front;
    int capacity;

public:
    Queue(int size)
    {
        this->capacity = size;
        this->rear = -1;
        this->front = -1;
    }

    void addQueue()
    {
        if (rear >= capacity - 1)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            int ele;
            cout << "Enter element to add : ";
            cin >> ele;

            if (front == -1)
            {
                front = 0;
            }

            rear++;
            arr[rear] = ele;
            cout << "Element Added successfully" << endl;
        }
    }

    void displayQueue()
    {
        if (front == -1)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            cout << "Queue Elements : ";
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    void deleteQueue()
    {
        if (front == -1)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            cout << "Deleted element : " << arr[front] << endl;
            front++;

            if (front > rear)
            {
                front = rear = -1;
            }
        }
    }
};


int main()
{
    int size;
    cout << "Enter Size of Queue : ";
    cin >> size;

    if (size > 50 || size <= 0)
    {
        cout << "Invalid size! Please enter size between 1 and 50." << endl;
    }
    else
    {
        Queue q(size);
        int choice;

        do
        {
            cout << "\n1. Enqueue" << endl;
            cout << "2. Dequeue" << endl;
            cout << "3. Display" << endl;
            cout << "0. Exit" << endl;
            cout << "Enter your choice : ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                q.addQueue();
                break;

            case 2:
                q.deleteQueue();
                break;

            case 3:
                q.displayQueue();
                break;

            case 0:
                cout << "Exiting....." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
                break;
            }
        } while (choice != 0);
    }

    return 0;
}