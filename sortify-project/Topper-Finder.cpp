#include<iostream>
using namespace std;

void inputArray(int a[], int size) {


    cout << "Enter the elements of an array: " << endl;


    for (int i = 0; i < size; i++) {
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

void findTop2(int a[], int size) 
{


    int max1 = a[0], max2 = -1;
    
    for (int i = 1; i < size; i++) 
    
    {

        if (a[i] > max1) 
        
        {


            max2 = max1;
            max1 = a[i];


        } 
        
        else if (a[i] > max2 && a[i] != max1) 
        {
            max2 = a[i];
        }
    }
    
    cout << "Top 2 numbers: " << max1;


    if (max2 != -1)

        cout << " " << max2;
    cout << endl;
}

int main() {


    int size;

    cout << "Enter the size of an array: ";
    cin >> size;

    int a[size];

    inputArray(a, size);
    
    cout << "Original array: ";
    
    printArray(a, size);

    findTop2(a, size);

    return 0;
}