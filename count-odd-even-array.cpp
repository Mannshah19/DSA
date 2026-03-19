#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int a[n] , odd = 0 , even = 0;

    
    cout << "Enter the elements of an array: "<< endl;
    for(int i=0; i<n; i++){
        cout << "Enter the [" << i <<"]: ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] %2 == 0)
        {
            even++;
        }

        else{
            odd++;
        }
        
    }
    
    cout << "Odd number: " << odd << endl;
    cout << "Even number: " << even << endl;




    return 0;


}