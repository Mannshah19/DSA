#include<iostream>
using namespace std;


    class Node 
    {

        public: 

        int data;

        Node *next;




    };

int main()

{

    Node *HEAD = NULL;

    HEAD = new Node();

    HEAD -> data = 10;
    HEAD -> next = NULL;
    
    cout << "First Node Address: " << HEAD << endl;
    cout << "First Node Data: " << HEAD -> data << endl;
    cout << "First Node next: " << HEAD -> next << endl;
    cout << endl;

    

    Node *current = new Node();

    current -> data = 20;
    current -> next = NULL;
    HEAD -> next = current;

    
    
    cout << "Second Node Address: " << current << endl;
    cout << "Second Node Data: " << current -> data << endl;
    cout << "Second Node next: " << current -> next << endl;
    cout << "First Node next: " << HEAD -> next << endl;
    cout << endl;

    current = new Node();
    current -> data = 30;
    current -> next = NULL;
    HEAD -> next -> next = current;

    
    
    cout << "Third Node Address: " << current << endl;
    cout << "Third Node Data: " << current -> data << endl;
    cout << "Third Node next: " << current -> next << endl;
    cout << "Second Node next: " << HEAD -> next -> next << endl;
    cout << endl;


    Node *ptr = NULL;
    ptr = HEAD;


    while (ptr != NULL)
    {
        cout << ptr -> data << endl;

        ptr = ptr-> next;
    }
    
    






    return 0;



}