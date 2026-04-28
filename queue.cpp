#include<iostream>
using namespace std;


class Queue 
{


    public:


        int arr[50];
        int rear = -1, front = -1;
        int count = 0, size, ele;
        



        void addQueue()
        {

            if (rear >= size - 1)
            {

                cout << "Queue is Full" << endl;
            }
            

            else
            {


                cout << "Enter element to add : ";
                cin >> ele;

                if (front == -1)
                {
                    front = 0;
                }

                rear++;

                arr[rear] = ele;

                count++;

                cout << "Element Added successfully" << endl;

            }
            
        }

        void displayQueue()
        {

            if (front == -1 && rear == -1)
            {

                cout << "Queue is Empty";
            }
            

            

            else
            {

                cout << "Queue Elements : ";

                for (int i = front; i <= rear ; i++)
                {

                    cout << arr[i] << " ";

                }

                cout << endl;

            }
            
        }

        void deleteQueue()
        {

            if (front == -1 || rear == -1 )
            {

                cout << "Queue is Empty" << endl;
            }
            

            else
            {

                cout << "Deleted element : " << arr[front] << endl;

                front++;

                count--;

                if (front > rear)
                {
                    front = rear = -1;
                }

            }
            
        }

        void frontQueue()
        {

            if (front == -1 || rear == -1 )
            {

                cout << "Queue is Empty" << endl;
            }
            

            else
            {

                cout << "Front element : " << arr[front] << endl;

            }
            
        }

        void rearQueue()
        {

            if (front == -1 || rear == -1 )
            {

                cout << "Queue is Empty" << endl;
            }
            

            else
            {

                cout << "Rear element : " << arr[rear] << endl;

            }
            
        }

        void isEmpty()
        {

            if (front == -1 || rear == -1 )
            {

                cout << "Queue is Empty" << endl;
            }
            

            else
            {

                cout << "Queue is not empty" << endl;

            }
            
        }

        void isFull()
        {

            if (rear >= size - 1)
            {

                cout << "Queue is full" << endl;
            }
            

            else
            {

                cout << "Queue is not full" << endl;

            }
            
        }

        void sizeQueue()
        {

            cout << "Queue size : " << count << endl;
            
        }
        
        





};


int main ()
{
    int size;
    cout << "Enter Size of Queue : ";
    cin >> size;

    Queue q;
    q.size = size;

    int choice;

    do

    {

        


        cout << "\n1. Add in Queue....." << endl;
        cout << "2. Delete from Queue....." << endl;
        cout << "3. Front of Queue....." << endl;
        cout << "4. Rear of Queue....." << endl;
        cout << "5. Check empty or not....." << endl;
        cout << "6. Check full or not....." << endl;
        cout << "7. Check size of Queue....." << endl;
        cout << "8. Display Queue....." << endl;
        cout << "0. Exit....." << endl;


        cout << "Enter your choice : ";
        cin >> choice;


        switch (choice)
        {
        case 1:
        {
            q.addQueue();
            
            
            break;
        }


        case 2:
        {

            q.deleteQueue();
            
            
            break;
        }

        case 3:
        {

            q.frontQueue();
            
            
            break;
        }

        case 4:
        {

            q.rearQueue();
            
            
            break;
        }

        case 5:
        {

            q.isEmpty();
            
            
            break;
        }

        case 6:
        {

            q.isFull();
            
            
            break;
        }

        case 7:
        {

            q.sizeQueue();
            
            
            break;
        }

        case 8:
        {

            q.displayQueue();
            
            
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