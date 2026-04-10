#include<iostream>
#include<vector>
using namespace std;


int main(){



    int n , ele;

    cout << "Enter size of an array: ";
    cin >> n;


    vector<int> v;

    for (int i = 0; i < n; i++)

    {
        cout << "Enter element at index [" << i << "]: ";
        cin >> ele;

        v.push_back(ele);
        
    }

    cout << "Elements smaller than adjacent neighbors: ";


    for (int i = 0; i < n; i++)

    {


        bool isSmaller = true;

        if (i > 0 && v[i] >= v[i-1]) isSmaller = false;


        if (i < n-1 && v[i] >= v[i+1]) isSmaller = false;



        if (isSmaller)


        {

            cout << v[i] << " ";

            
        }
    }
    




    return 0;



}