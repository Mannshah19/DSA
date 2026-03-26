#include<iostream>
using namespace std;




int main(){


    int size;
    cout << "Enter the size of an array: ";
    cin >> size;


    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];

    }
    
    cout << "Original Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;

    }
    
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }

        cout << "\nSorted Array : ";


    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    

    return 0;



}