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
        cout << a[i] << " " ;

    int temp = a[size - 1];

    for (int i = size - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
    
    cout << "\nNew array: " << endl;
    for (int i = 0; i < size; i++)
        cout << a[i] << " " ;



return 0;



}