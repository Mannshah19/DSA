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

void DeleteElement()
{
    int choice;
    do
    {
        cout << "\n--- Delete Menu ---" << endl;
        cout << "1. Delete from Beginning" << endl;
        cout << "2. Delete from End" << endl;
        cout << "3. Delete at any Position" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice)
        {
            case 1:
            {
                if (HEAD == NULL)

                {

                    cout << "List is empty, nothing to delete" << endl;
                }

                else
                {


                    Node *current = HEAD;

                    HEAD = HEAD->next;

                    cout << "Deleted " << current->data << " from beginning" << endl;

                    delete current;

                }

                break;


            }


            case 2:
            {

                if (HEAD == NULL)


                {


                    cout << "List is empty, nothing to delete" << endl;

                }
                else if (HEAD->next == NULL)

                {

                    cout << "Deleted " << HEAD->data << " from end" << endl;

                    delete HEAD;

                    HEAD = NULL;

                }

                else

                {

                    Node *current = HEAD;

                    while (current->next->next != NULL)

                        current = current->next;

                    cout << "Deleted " << current->next->data << " from end" << endl;

                    delete current->next;

                    current->next = NULL;

                }


                break;


            }


            case 3:
            {


                if (HEAD == NULL)


                {

                    cout << "List is empty, nothing to delete" << endl;

                    break;

                }

                int pos;

                cout << "Enter position: ";
                cin >> pos;


                if (pos > CountElement() || pos < 1)


                {


                    cout << "Position out of range. List has " << CountElement() << " nodes" << endl;

                }

                else if (pos == 1)

                {


                    Node *current = HEAD;

                    HEAD = HEAD->next;

                    cout << "Deleted " << current->data << " from position " << pos << endl;

                    delete current;


                }


                else

                {


                    Node *current = HEAD;

                    for (int i = 1; i < pos - 1; i++)


                        current = current->next;

                    Node *ptr = current->next;

                    current->next = ptr->next;

                    cout << "Deleted " << ptr->data << " from position " << pos << endl;
                    delete ptr;


                }


                break;


            }

            case 0:


            {

                cout << "Returning to main menu..." << endl;

                break;
                
            }

            default:
            {
                cout << "Invalid Choice";
                break;
            }
            
        }
    } while (choice != 0);
}

void InsertElement()
{
    int choice, ele;
    do
    {
        cout << "\n--- Insert Menu ---" << endl;
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Insert at any Position" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice)
        {
            case 1:
            {

                cout << "Enter value: ";
                cin >> ele;


                if (HEAD == NULL)

                {

                    HEAD = new Node(ele);

                }
                else

                {

                    Node *current = new Node(ele);

                    current->next = HEAD;
                    HEAD = current;
                }

                cout << "Inserted " << ele << " at beginning" << endl;



                break;
            }
            case 2:
            {
                cout << "Enter value: ";
                cin >> ele;

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

                cout << "Inserted " << ele << " at end" << endl;


                break;
            }
            case 3:
            {
                int pos;

                cout << "Enter position: ";
                cin >> pos;


                cout << "Enter value: ";
                cin >> ele;

                if (pos > CountElement() + 1)
                {
                    cout << "Position out of range. List has " << CountElement() << " nodes" << endl;
                }
                else if (pos == 1)
                {
                    Node *current = new Node(ele);

                    current->next = HEAD;
                    HEAD = current;

                    cout << "Inserted " << ele << " at position " << pos << endl;
                }
                else
                {
                    Node *current = HEAD;

                    for (int i = 1; i < pos - 1; i++)

                    {

                        current = current->next;

                    }

                    Node *ptr = new Node(ele);
                    ptr->next = current->next;
                    current->next = ptr;

                    cout << "Inserted " << ele << " at position " << pos << endl;
                }
                break;
            }
            case 0:
            {
                cout << "Returning to main menu..." << endl;
                break;
            }

            default:
            {
                cout << "Invalid Choice";
                break;
            }
            
        }
    } while (choice != 0);
}

int CountElement()
{
    Node *current = HEAD;

    int count = 0;

    while (current != NULL)

    {

        count++;
        current = current->next;

    }

    return count;
}

void UpdateElement()
{
    if (HEAD == NULL)
    {

        cout << "List is empty" << endl;
        return;

    }

    int pos, ele;

    cout << "Enter position to update: ";
    cin >> pos;


    cout << "Enter new value: ";
    cin >> ele;


    if (pos > CountElement())
    {

        cout << "Position out of range. List has " << CountElement() << " nodes" << endl;
        return;

    }

    Node *current = HEAD;

    for (int i = 1; i < pos; i++)

    {

        current = current->next;

    }

    current->data = ele;
    cout << "Updated position " << pos << " to " << ele << endl;
}


void displayElement()
{
    if (HEAD == NULL)


    {

        cout << "List is empty" << endl;


    }


    else
    {

        Node *current = HEAD;

        cout << "List elements: ";
        while (current != NULL)

        {

            cout << current->data << " ";
            current = current->next;


        }
        cout << endl;
    }
}

int main()

{

    int choice , ele , pos;


    do
    {




        cout << "CRUD Operations....." << endl;
        cout <<"1. Insert Element in the Linked List....." << endl;
        cout <<"2. Delete Element in the Linked List....." << endl;
        cout <<"3. Update Element from the Linked List....." << endl;
        cout <<"4. Display Element in the Linked List....." << endl;
        cout <<"5. Count Element in the Linked List....." << endl;
        cout <<"0. Exit....." << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
            case 1:
                {
                    InsertElement();
                    break;
                }

                case 2:
                {
                    DeleteElement();
                    break;
                }

                case 3:
                {
                    UpdateElement();
                    break;
                }

                case 4:
                {
                    displayElement();
                    break;
                }


                case 5:
                {
                    cout << "Total nodes: " << CountElement() << endl;
                    break;
                }

                case 0:
                {

                    break;
                }
            
            
            default:
                {
                    cout << "Invalid Choice";
                    break;
                }
        }
    } while (choice);
    
    
    






    return 0;



}