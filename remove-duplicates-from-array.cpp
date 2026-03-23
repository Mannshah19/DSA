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
    
    cout << "Original array: ";
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;

    int newSize = 0;
    for (int i = 0; i < size; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
            a[newSize++] = a[i];
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++)
        cout << a[i] << " ";
    cout << endl;
    


    return 0;


}