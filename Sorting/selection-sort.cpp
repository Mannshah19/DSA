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


    void selectionSort(int s , int arr[])
    {
        for (int i = 0; i < s - 1; i++)
        {

            int minElement = i;

        for (int j = i + 1; j < s; j++)
        {
            if (arr[j] < arr[minElement])
            {
                minElement = j;
            }

        }


        int temp = arr[i];
        arr[i] = arr[minElement];
        arr[minElement] = temp;
        }
    }

int main (){

    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int arr[size];
    inputElement(size, arr);


    printElements(size, arr);

    selectionSort( size , arr);

    printElements(size, arr);


    return 0;


}