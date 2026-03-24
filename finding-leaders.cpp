#include<iostream>
using namespace std;

int main(){


    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int a[size];

    cout << "Enter the elements of an array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    
    cout << "Original array: " << endl;
    for (int i = 0; i < size; i++)
    {


        cout << a[i] << " " ;

    }

    cout << "\nLeaders: " << endl;
    for (int i = 0; i < size; i++)
    {
        bool isLeader = true;
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] < a[j])
            {
                isLeader = false;
                break;
            }
        }
        if (isLeader == true)
        {
            cout << a[i] << " ";
        }
    }



return 0;



}