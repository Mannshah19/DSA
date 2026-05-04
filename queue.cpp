#include<iostream>
using namespace std;

class Queue 
{
private:
    int arr[50];
    int rear, front;
    int count, size;

public:
    Queue() : rear(-1), front(-1), count(0), size(0) {}

    void setSize(int s) {
        size = s;
    }

    void addQueue()
    {
        if (rear >= size - 1)
        {
            cout << "Queue is Full" << endl;
            return;
        }

        int ele;
        cout << "Enter element to add : ";
        cin >> ele;

        if (front == -1)
            front = 0;

        arr[++rear] = ele;
        count++;
        cout << "Element Added successfully" << endl;
    }

    void displayQueue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue Elements : ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteQueue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Deleted element : " << arr[front] << endl;
        front++;
        count--;

        if (front > rear)
            front = rear = -1;
    }

    void frontQueue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Front element : " << arr[front] << endl;
    }

    void rearQueue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Rear element : " << arr[rear] << endl;
    }

    void isEmpty()
    {
        if (front == -1 || front > rear)
            cout << "Queue is empty" << endl;
        else
            cout << "Queue is not empty" << endl;
    }

    void isFull()
    {
        if (rear >= size - 1)
            cout << "Queue is full" << endl;
        else
            cout << "Queue is not full" << endl;
    }

    void sizeQueue()
    {
        cout << "Queue size : " << count << endl;
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
        return 0;
    }

    Queue q;
    q.setSize(size);

    int choice;

    do
    {
        cout << "\n1. Add in Queue" << endl;
        cout << "2. Delete from Queue" << endl;
        cout << "3. Front of Queue" << endl;
        cout << "4. Rear of Queue" << endl;
        cout << "5. Check empty or not" << endl;
        cout << "6. Check full or not" << endl;
        cout << "7. Check size of Queue" << endl;
        cout << "8. Display Queue" << endl;
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
            q.frontQueue();
            break;

        case 4:
            q.rearQueue();
            break;

        case 5:
            q.isEmpty();
            break;

        case 6:
            q.isFull();
            break;

        case 7:
            q.sizeQueue();
            break;

        case 8:
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

    return 0;
}