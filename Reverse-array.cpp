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
    
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    

    cout << "\nReverse of an array is: ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    


    return 0;


}