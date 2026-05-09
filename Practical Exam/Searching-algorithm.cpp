#include<iostream>
using namespace std;

int main()
{
    int n, key, comparisons = 0;
    bool found = false;
    int index;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;
    for(int i = 0; i < n; i++)
    {
        comparisons++;
        if(arr[i] == key)
        {
            index = i;
            found = true;
            break;
        }
    }
    
    if(found)
    {
        cout << "Element found at position " << index + 1 << endl;
    }
    else
    {
        cout << "Element not found" << endl;



    }
    cout << "Number of comparisons: " << comparisons << endl;
    
    return 0;
}
