#include<iostream>
using namespace std;


class Stack 
{
private:
    int *arr;
    int top;
    int size;

public:
    Stack(int s) {
        this->size = s;
        this->arr = new int[this->size];
        this->top = -1;
    }



    void pushStack()
    {
        if (top >= size - 1)
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            int ele;
            cout << "Enter element to push : ";
            cin >> ele;

            top++;
            arr[top] = ele;

            cout << "Element pushed successfully" << endl;
        }
    }

    void viewStack()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Stack Elements : ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    void popStack()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            cout << "Popped element : " << arr[top] << endl;
            top--;
        }
    }
        
        
    ~Stack() 
    {
        delete[] arr;
    }
};


int main()
{
    int size;
    cout << "Enter Size of a Stack : ";
    cin >> size;
    
    if (size <= 0)
    {
        cout << "Invalid size! Please enter a positive number." << endl;
    }
    else
    {
        Stack s(size);
        int choice;

        do
        {
            cout << "\n1. Push in Stack....." << endl;
            cout << "2. Pop from Stack....." << endl;
            cout << "3. View Stack....." << endl;
            cout << "0. Exit....." << endl;

            cout << "Enter your choice : ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                s.pushStack();
                break;

            case 2:
                s.popStack();
                break;

            case 3:
                s.viewStack();
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