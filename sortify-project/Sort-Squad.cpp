#include<iostream>
using namespace std;

void inputArray(int a[], int size) 
{
    
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

void bubbleSortAscending(int a[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (a[j] > a[j + 1]) 
            {


                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;


            }
        }
    }
}

void bubbleSortDescending(int a[], int size) 

{
    for (int i = 0; i < size - 1; i++) 


    {
        for (int j = 0; j < size - i - 1; j++) 
        
        {


            if (a[j] < a[j + 1]) 
            
            {


                int temp = a[j];

                a[j] = a[j + 1];

                a[j + 1] = temp;


            }


        }




    }



}

void selectionSortAscending(int a[], int size) 
{


    for (int i = 0; i < size - 1; i++) 
    
    {


        int minIndex = i;


        for (int j = i + 1; j < size; j++) 
        
        {
        
        
            if (a[j] < a[minIndex]) 
            
            {

                minIndex = j;


            }
        }


        int temp = a[i];


        a[i] = a[minIndex];
        a[minIndex] = temp;


    }


}

void selectionSortDescending(int a[], int size) 

{


    for (int i = 0; i < size - 1; i++) 
    
    {

        int maxIndex = i;

        for (int j = i + 1; j < size; j++) 
        {


            if (a[j] > a[maxIndex]) 
            
            {

                maxIndex = j;

            }


        }

        int temp = a[i];


        a[i] = a[maxIndex];
        a[maxIndex] = temp;
    }
}

int main() {


    int size;

    cout << "Enter the size of an array: ";
    cin >> size;
    
    int a[size];
    
    inputArray(a, size);
    
    cout << "\nOriginal array: ";

    printArray(a, size);
    
    int sortMethod, sortOrder;
    
    cout << "\nSelect Sorting Method:" << endl;

    cout << "1. Bubble Sort" << endl;

    cout << "2. Selection Sort" << endl;

    cout << "Enter your choice: ";

    cin >> sortMethod;
    
    cout << "\nSelect Sorting Order:" << endl;

    cout << "1. Ascending Order" << endl;

    cout << "2. Descending Order" << endl;


    cout << "Enter your choice: ";
    cin >> sortOrder;
    
    switch (sortMethod) 
    {


        case 1:
            switch (sortOrder) 
            {


                case 1:


                    bubbleSortAscending(a, size);
                    cout << "\nArray sorted using Bubble Sort in Ascending Order: ";


                    break;


                case 2:


                    bubbleSortDescending(a, size);
                    cout << "\nArray sorted using Bubble Sort in Descending Order: ";


                    break;


                default:


                    cout << "\nInvalid order choice!";


                    return 1;


            }


            break;
            
        case 2:

            switch (sortOrder) 
            
            {
                case 1:


                    selectionSortAscending(a, size);
                    cout << "\nArray sorted using Selection Sort in Ascending Order: ";


                    break;

                case 2:

                    selectionSortDescending(a, size);
                    cout << "\nArray sorted using Selection Sort in Descending Order: ";


                    break;

                default:

                    cout << "\nInvalid order choice!";

                    return 1;

            }

            break;
            
        default:

            cout << "\nInvalid sorting method choice!";
            return 1;
    }
    


    printArray(a, size);
    


    return 0;
}
