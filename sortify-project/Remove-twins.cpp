#include<iostream>
using namespace std;

void inputArray(int a[], int size) {


    cout << "Enter the elements of an array: " << endl;


    for (int i = 0; i < size; i++) {

        cout << "a[" << i << "] = ";
        cin >> a[i];


    }
}

void printArray(int a[], int size) {


    for (int i = 0; i < size; i++)

        cout << a[i] << " ";

    cout << endl;


}

int removeDuplicates(int a[], int size) {


    int newSize = 0;

    for (int i = 0; i < size; i++) {

        bool isDuplicate = false;


        for (int j = 0; j < i; j++) {

            if (a[i] == a[j]) {
                isDuplicate = true;
                break;

            }

        }

        if (!isDuplicate)


            a[newSize++] = a[i];


    }


    return newSize;


}

int main() {


    int size;

    cout << "Enter the size of an array: ";
    cin >> size;

    int a[size];

    inputArray(a, size);
    
    cout << "Original array: ";


    printArray(a, size);

    int newSize = removeDuplicates(a, size);

    cout << "Array after removing duplicates: ";

    
    printArray(a, newSize);

    return 0;
}