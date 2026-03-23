#include<iostream>
using namespace std;


int main(){


    int size;
    bool isPalindrome = true;

    cout << "Enter the size of an array: ";
    cin >> size;

    int a[size];

    cout << "Enter the elements of an array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    

    
    for (int i = 0; i < size / 2; i++)
    {
        if (a[i] != a[size - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }
    
    if (isPalindrome)
    {
        cout << "\nArray is  a palindrome" << endl;
        
    }
    
    else
    {
        cout << "\nArray is not a palindrome" << endl;
    }


    return 0;


}