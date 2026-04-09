#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, ele , temp;
    vector<int> v;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter Elements: " << endl;
    
    for (int i = 0; i < n; i++)

    {

        cin >> ele;

        v.push_back(ele);
        
    }
    
    
    for (int i = 0; i < n / 2; i++)


    {


        temp = v[i];

        v[i] = v[n - i - 1];

        v[n - i - 1] = temp;

    }
    
    cout << "Elements: ";

    for (int i = 0; i < v.size(); i++)


    {


        cout << v[i] << " ";

    }

    cout << endl;

    return 0;
}