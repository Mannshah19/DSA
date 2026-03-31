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


    void merge(int arr[], int left, int mid, int right){

        int n1 = mid - left + 1;
        int n2 = right - mid;


        int temp1[n1], temp2[n2];

        for (int i = 0; i < n1; i++)
        {
            temp1[i] = arr [left + i];
        }

        for (int j = 0; j < n2; j++)
        {
            temp2[j] = arr [mid + 1 + j];
        }
        

        int i = 0, j = 0 , k = left;

        while (i < n1 && j < n2)
        {
            if (temp1[i] <= temp2[j])
            {
                arr[k] = temp1[i];
                i++;
            }
            else
            {
                arr[k] = temp2[j];
                j++;
            }
            k++;
        }

        while (i < n1)
        {
            arr[k++] = temp1[i++];
        }

        while (j < n2)
        {
            arr[k++] = temp2[j++];
        }
        

    }

    void mergeSort(int arr[] , int low , int high)
    {
        
        if ( low >= high )
        {
            return;
        }
        
        int mid = (low + high) / 2;

        mergeSort( arr, low, mid );
        mergeSort( arr, mid + 1, high );

        merge(arr, low, mid, high);

    }

int main (){

    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int arr [size];
    inputElement(size, arr);


    printElements(size, arr);

    mergeSort(arr , 0 ,size - 1);

    printElements(size, arr);


    return 0;


}