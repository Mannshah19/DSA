#include<iostream>
using namespace std;



void inputElement(int s , int arr[])

{

    for (int i = 0; i < s; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];

    }

    
    
    
}

    void printElements(int s , int arr[])
    {

        cout << "\nOriginal Array : ";
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " " ;

    }

    }


    void insertSort(int s , int arr[])
    {
        for (int i = 1; i < s; i++)
        {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                
            }
            arr[j + 1] = key;
        }
    }

int main (){

    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int arr[size];
    inputElement(size, arr);


    printElements(size, arr);

    insertSort( size , arr);

    printElements(size, arr);


    return 0;


}