#include<iostream>
using namespace std;


class Stack 
{


    public:


        int *arr;

        int top;

        int size;

        int count = 0 , ele;
        
        Stack(int s) {

            size = s;

            arr = new int[size];

            top = -1;

            count = 0;

        }



        void pushStack()
        {

            if (top >= size - 1)
            {

                cout << "Stack overflow";
            }
            

            else
            {


                cout << "Enter element to push : ";
                cin >> ele;

                top++;

                arr[top] = ele;

                count++;

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

                for (int i = top; i >= 0 ; i--)
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

                count--;

            }
            
        }

        void peekStack()
        {

            if (top == -1)
            {

                cout << "Stack is empty" << endl;
            }
            

            else
            {

                cout << "Top element : " << arr[top] << endl;

            }
            
        }

        void isEmpty()
        {

            if (top == -1)
            {

                cout << "Stack is empty" << endl;
            }
            

            else
            {

                cout << "Stack is not empty" << endl;

            }
            
        }

        void isFull()
        {

            if (top >= size - 1)
            {

                cout << "Stack is full" << endl;
            }
            

            else
            {

                cout << "Stack is not full" << endl;

            }
            
        }

        void sizeStack()
        {

            cout << "Stack size : " << count << endl;
            
        }
        
        
        ~Stack() 
        {

            delete[] arr;

        }




};


int main ()
{
    int size;
    cout << "Enter Size of a Stack : ";
    cin >> size;
    
    Stack s(size);

    int choice;

    do

    {

        cout << "\n1. Push in Stack....." << endl;
        cout << "2. Pop from Stack....." << endl;
        cout << "3. Peek of Stack....." << endl;
        cout << "4. View  Stack....." << endl;
        cout << "5. Check empty or not....." << endl;
        cout << "6. Check full or not....." << endl;
        cout << "7. Check size of stack....." << endl;
        cout << "0. Exit....." << endl;


        cout << "Enter your choice : ";
        cin >> choice;


        switch (choice)
        {
        case 1:
        {
            s.pushStack();
            
            
            break;
        }


        case 2:
        {

            s.popStack();
            
            
            break;
        }

        case 3:
        {

            s.peekStack();
            
            
            break;
        }

        case 4:
        {

            s.viewStack();
            
            
            break;
        }

        case 5:
        {

            s.isEmpty();
            
            
            break;
        }

        case 6:
        {

            s.isFull();
            
            
            break;
        }

        case 7:
        {

            s.sizeStack();
            
            
            break;
        }


        case 0:
        {

            cout << "Exiting....." << endl;
            
            
            break;
        }


        
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
        
    } while (choice != 0);
    








return 0;


}