#include<iostream>
using namespace std;

int main(){


    int arr[10] = {11,22,33,11,22,44,55,55,66,11};

    for(int i = 0; i < 10; i++){
        bool alreadyCounted = false;
        for(int k = 0 ; k <i ; k++){
            if( arr[i]==arr[k] ){
                alreadyCounted = true;
                break;
            }
        }
        if(alreadyCounted) continue;
        
        int count = 1;
        for(int j = i + 1; j < 10; j++){
            if( arr[i]==arr[j] ){
                count++;
            }
        }
        cout << arr[i] <<" occurs " << count <<" times" << endl;
    }



    return 0;


}