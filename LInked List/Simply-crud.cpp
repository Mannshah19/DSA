#include<iostream>
using namespace std;


    class Node 
    {

        public: 

        int data;

        Node *next;


    Node (int e)
    {


        data = e;
        next = NULL;
    }



    };

Node *HEAD = NULL;

void insertAtBeginning(int ele)

{


    Node *current = new Node(ele);
    current->next = HEAD;
    HEAD = current;


}

void insertAtEnd(int ele)
{
    if (HEAD == NULL)
    {

        HEAD = new Node(ele);

    }
    else
    {

        Node *current = HEAD;
        while (current->next != NULL)

        {

            current = current->next;
        }

        current->next = new Node(ele);

    }
    
}

int main()

{

    int choice;


    do
    {




        cout << "CRUD Operations....." << endl;
        cout <<"1. Insert Element in the Linked List....." << endl;
        cout <<"2. Delete Element in the Linked List....." << endl;
        cout <<"3. Update Element from the Linked List....." << endl;
        cout <<"4. Display Element in the Linked List....." << endl;
        cout <<"5. Count Element in the Linked List....." << endl;
        cout <<"0. Exit....." << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;
        cout << endl;
        switch (choice)
        {
            case 1:
                {
                    int value, pos;
                    cout << "1. Insert at Beginning\n2. Insert at End\nEnter position: ";
                    cin >> pos;
                    cout << "Enter value: ";
                    cin >> value;
                    if (pos == 1)
                        insertAtBeginning(value);
                    else
                        insertAtEnd(value);
                    break;
                }

                case 2:
                {

                    break;
                }

                case 3:
                {

                    break;
                }

                case 4:
                {

                    break;
                }
            
            
            default:
                {
                    break;
                }
        }
    } while (choice);
    
    
    






    return 0;



}