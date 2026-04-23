#include<iostream>
#include<string>
using namespace std;


class Stack
{


    public:


        char arr[20];

        int top;

        Stack()
        {

            top = -1;

        }


        void checkPalindrome()
        {

            string str;

            cout << "Enter string : ";
            cin >> str;

            int len = str.length();


            for (int i = 0; i < len; i++)
            {

                if (top >= 19)
                {

                    cout << "Stack overflow" << endl;
                    

                }

                top++;

                arr[top] = str[i];

            }


            cout << "Reversed string : ";

            bool isPalindrome = true;

            for (int i = 0; i < len; i++)
            {

                cout << arr[top] << " ";

                if (str[i] != arr[top])
                {

                    isPalindrome = false;

                }

                top--;

            }

            cout << endl;


            if (isPalindrome)
            {

                cout << "String is palindrome" << endl;

            }

            else
            {

                cout << "String is not palindrome" << endl;

            }

        }




};


int main()
{

    Stack s;

    s.checkPalindrome();



    return 0;



}
