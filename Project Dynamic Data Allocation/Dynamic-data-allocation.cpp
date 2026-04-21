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

void append()
{
    int ele;

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

    cout << "Appended " << ele << endl;


}

void display()
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

void insert_at_beginning()
{
    int ele;

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



}

void Search()
{
    if (HEAD == NULL)


    {

        cout << "List is empty" << endl;

        return;


    }

    int key;

    cout << "Enter value to search: ";
    cin >> key;


    Node *current = HEAD;

    int pos = 1;
    bool found = false;

    while (current != NULL)

    {

        if (current->data == key)

        {

            cout << "Element " << key << " found at position " << pos << endl;

            found = true;
            break;

        }

        current = current->next;
        pos++;

    }

    if (!found)

    {

        cout << "Element " << key << " not found" << endl;

    }
}

void Delete_node()
{
    if (HEAD == NULL)


    {

        cout << "List is empty, nothing to delete" << endl;

        return;


    }

    int key;

    cout << "Enter value to delete: ";
    cin >> key;


    if (HEAD->data == key)

    {

        Node *current = HEAD;

        HEAD = HEAD->next;

        cout << "Deleted " << current->data << endl;

        delete current;

        return;

    }

    Node *current = HEAD;

    while (current->next != NULL && current->next->data != key)

    {

        current = current->next;

    }

    if (current->next == NULL)

    {

        cout << "Element " << key << " not found" << endl;

    }

    else

    {

        Node *ptr = current->next;

        current->next = ptr->next;

        cout << "Deleted " << ptr->data << endl;

        delete ptr;

    }
}

void reverse()
{
    if (HEAD == NULL)


    {

        cout << "List is empty" << endl;

        return;


    }

    Node *prev = NULL;

    Node *current = HEAD;

    Node *next = NULL;


    while (current != NULL)

    {

        next = current->next;

        current->next = prev;

        prev = current;

        current = next;

    }

    HEAD = prev;

    cout << "List reversed" << endl;
}

int main()

{

    int choice;


    do
    {




        cout << "Linked List Operations....." << endl;
        cout <<"1. Append....." << endl;
        cout <<"2. Display....." << endl;
        cout <<"3. Insert at Beginning....." << endl;
        cout <<"4. Search....." << endl;
        cout <<"5. Delete Node....." << endl;
        cout <<"6. Reverse....." << endl;
        cout <<"0. Exit....." << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
            case 1:
                {
                    append();
                    break;
                }

                case 2:
                {
                    display();
                    break;
                }

                case 3:
                {
                    insert_at_beginning();
                    break;
                }

                case 4:
                {
                    Search();
                    break;
                }


                case 5:
                {
                    Delete_node();
                    break;
                }

                case 6:
                {
                    reverse();
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
