#include<iostream>
using namespace std;

void inputElement(int s, int arr[])
{
    for (int i = 0; i < s; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

void printElements(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int left, int mid, int right, bool ascending)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int temp1[n1], temp2[n2];

    for (int i = 0; i < n1; i++)
    {
        temp1[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        temp2[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (ascending ? (temp1[i] <= temp2[j]) : (temp1[i] >= temp2[j]))
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

void mergeSort(int arr[], int low, int high, bool ascending)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;

    mergeSort(arr, low, mid, ascending);

    mergeSort(arr, mid + 1, high, ascending);
    
    merge(arr, low, mid, high, ascending);
}

int main()
{


    int size;

    cout << "Enter the size of an array: ";
    cin >> size;

    int arr[size], even[size], odd[size];

    int evenCount = 0, oddCount = 0;

    inputElement(size, arr);

    for (int i = 0; i < size; i++)

    {


        if (arr[i] % 2 == 0)
        {

            even[evenCount++] = arr[i];
        }
        else
        {

            odd[oddCount++] = arr[i];

        }
    }

    cout << "\nEven numbers: ";


    printElements(even, evenCount);

    cout << "Odd numbers: ";


    printElements(odd, oddCount);

    mergeSort(even, 0, evenCount - 1, true);

    mergeSort(odd, 0, oddCount - 1, false);

    cout << "\nSorted even numbers: ";

    printElements(even, evenCount);

    cout << "Sorted odd numbers: ";

    printElements(odd, oddCount);





    return 0;



}
