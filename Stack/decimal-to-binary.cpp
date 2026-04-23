#include<iostream>
using namespace std;


class Stack
{


    public:


        int arr[20];

        int top;

        Stack()
        {

            top = -1;

        }


        void decimalToBinary()
        {

            int decimal;

            cout << "Enter decimal number : ";
            cin >> decimal;

            if (decimal == 0)
            {

                cout << "Binary : 0" << endl;
            

            }

            while (decimal > 0)
            {

                int remainder = decimal % 2;

                if (top >= 19)
                {

                    cout << "Stack overflow" << endl;
                    return;

                }

                top++;

                arr[top] = remainder;

                decimal = decimal / 2;

            }

            cout << "Binary : ";

            for (int i = top; i >= 0; i--)
            {

                cout << arr[i] << " ";

            }

            cout << endl;

        }






};


int main()
{

    Stack s;

    s.decimalToBinary();



    return 0;



}