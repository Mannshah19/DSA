#include<iostream>
using namespace std;

void inputArray(int a[], int size) {


    cout << "Enter the elements of an array: " << endl;


    for (int i = 0; i < size; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];

        
    }

}

void printArray(int a[], int size) 
{

    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;

    
}

void countPositiveNegative(int a[], int size) 
{
    int positive = 0, negative = 0;
    
    for (int i = 0; i < size; i++) 


    {


        if (a[i] >= 0)

        {


            positive++;
        }
        else
        {
            negative++;


        }

    }
    
    cout << "Positive number: " << positive << endl;

    cout << "Negative number: " << negative << endl;


    
}

int main() {


    int size;

    cout << "Enter the size of an array: ";
    cin >> size;

    int a[size];

    inputArray(a, size);
    
    cout << "Original array: ";
    
    printArray(a, size);

    countPositiveNegative(a, size);

    return 0;
}