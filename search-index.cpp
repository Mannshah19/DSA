#include<iostream>
using namespace std;    


int main(){

    int arr[6] = {10, 20, 30, 40, 50, 10};
    int searchElement;
    bool found = false;

    cout << "Enter the element you want to search: ";
    cin >> searchElement;

    for(int i=0; i<6; i++){
        if(arr[i] == searchElement){
            cout << "Element found"<< endl;
            break;
        }
    }


    return 0;
}
