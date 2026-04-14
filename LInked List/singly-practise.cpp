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
    n2 -> next = NULL;
    HEAD -> next = n2;

    
    
    cout << "Second Node Address: " << n2 << endl;
    cout << "Second Node Data: " << n2 -> data << endl;
    cout << "Second Node next" << n2 -> next << endl;
    cout << "First Node next: " << HEAD -> next << endl;
    cout << endl;


    






    return 0;



}