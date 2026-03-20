#include<iostream>
using namespace std;


int main (){

    int choice = 1, n;

    cout<< "Enetr Array Size: ";
    cin >> n;

    int a[n];
    int pos = 0 , ele = 0;

    while (choice)
    {
        cout << "1. Insert or Update Element in Array" << endl;
        cout << "2. Delete Element in Array" << endl;
        cout << "3. Elements in Array" << endl;
        cout << "0. Exit " << endl;


        cout << "\nEnter your choice: ";
        cin >> choice;



    switch (choice)
    {
    case 1:
        
        cout << "Enter the position of an array: ";
        cin >> pos;
        cout << "Enter the element of an array: "; 
        cin >> ele;


        if (pos >= 0 && pos < n)
        {
            a[pos] = ele;
            cout << "\n Element Inserted/Updated Successfully \n" << endl;
        }
        
        else{
            cout << "Invalid Position" << endl;
        }

        break;

    case 2:

        cout << "Enter the position of an array: ";
        cin >> pos;

        if (pos >= 0 && pos < n)
        {
            for(int i = pos; i < n; i++)
                {
                    a[i] = a[i+1];
                }
                n--;
            cout << "/n Element Deleted Successfully /n" << endl;
        }
        
        else{
            cout << "Invalid Position" << endl;
        }

        break;

    case 3:

        for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;

        break;

    case 0:
        cout << "Exiting..." << endl;
        break;

    default:

        cout << "Invalid Choice" << endl;
        break;
    }
    }







    return 0;


}