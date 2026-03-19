#include<iostream>
using namespace std;


int main(){


    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of an array" << endl;
    for(int i=0; i<n; i++){
        cout << "Enter the [" << i <<"]: ";
        cin >> a[i];
    }

    cout << "The elements of an array are" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    




    return 0;

}