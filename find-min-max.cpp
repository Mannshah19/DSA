#include<iostream>
using namespace std;

int main(){

    int arr[5] = {40 , 20 , 30 , 40 , 50};

    int max = arr[0], min = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}