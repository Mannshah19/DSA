#include<iostream>
using namespace std;

class Node 
{
public: 
    int data;
    Node *next;

    Node(int e)
    {
        this->data = e;
        this->next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList() {
        this->head = NULL;
    }

    void insertAtBeginning()
    {
        int ele;
        cout << "Enter value: ";
        cin >> ele;

        Node *current = new Node(ele);
        current->next = head;
        head = current;

        cout << "Inserted " << ele << " at beginning" << endl;
    }

    void insertAtEnd()
    {
        int ele;
        cout << "Enter value: ";
        cin >> ele;

        if (head == NULL)
        {
            head = new Node(ele);
        }
        else
        {
            Node *current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = new Node(ele);
        }

        cout << "Inserted " << ele << " at end" << endl;
    }

    void deleteFromBeginning()
    {
        if (head == NULL)
        {
            cout << "List is empty, nothing to delete" << endl;
        }
        else
        {
            Node *current = head;
            head = head->next;
            cout << "Deleted " << current->data << " from beginning" << endl;
            delete current;
        }
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            Node *current = head;
            cout << "List elements: ";
            while (current != NULL)
            {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
    }

    ~LinkedList()
    {
        while (head != NULL)
        {
            Node *current = head;
            head = head->next;
            delete current;
        }
    }
};

int main()
{
    LinkedList list;
    int choice;

    do
    {
        cout << "\n1. Insert at Beginning" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Delete from Beginning" << endl;
        cout << "4. Display List" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            list.insertAtBeginning();
            break;

        case 2:
            list.insertAtEnd();
            break;

        case 3:
            list.deleteFromBeginning();
            break;

        case 4:
            list.display();
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
