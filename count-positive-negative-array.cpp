#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int a[n] , positive = 0 , negative = 0;

    
    cout << "Enter the elements of an array: "<< endl;
    for(int i=0; i<n; i++){
        cout << "Enter the [" << i <<"]: ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a [i] >= 0)
        {
            positive++;
        }

        else{
            negative++;
        }
        
    }
    
    cout << "Positive number: " << positive << endl;
    cout << "Negative number: " << negative << endl;




    return 0;


}