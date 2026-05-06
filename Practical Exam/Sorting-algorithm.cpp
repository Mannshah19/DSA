#include<iostream>
using namespace std;

// Quick Sort Time Complexity:
// Best Case: O(n log n)
// Average Case: O(n log n)
// Worst Case: O(n^2)

void inputElement(int s, int arr[])
{
    for (int i = 0; i < s; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

void printElements(int s, int arr[])
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int arr[size];
    inputElement(size, arr);

    cout << "\nOriginal Array : ";
    printElements(size, arr);

    quickSort(arr, 0, size - 1);

    cout << "Sorted Array : ";
    printElements(size, arr);

    return 0;
}
