#include<iostream>
using namespace std;

template <class T>
class Calculator
{

private:
    T n1 , n2;


public:

    Calculator(T n1 , T n2)
    {
        this->n1 = n1;
        this->n2 = n2;
    }

    void displayResult() {
        cout << "Numbers: " << n1 << " and " << n2 << "." << endl;
        cout << n1 << " + " << n2 << " = " << add() << endl;
        cout << n1 << " - " << n2 << " = " << subtract() << endl;
        cout << n1 << " * " << n2 << " = " << multiply() << endl;
        cout << n1 << " / " << n2 << " = " << divide() << endl;
    }

    T add() { return n1 + n2; }
    T subtract() { return n1 - n2; }
    T multiply() { return n1 * n2; }
    T divide() { return n1 / n2; }

};




int main()
{

    Calculator<int> intCalc (2 , 1);

    Calculator<float> floatCalc(2.4, 1.2);


    cout << "Int results:" << endl;
    intCalc.displayResult();

    cout << "Float results:" << endl;
    floatCalc.displayResult();





return 0;




}