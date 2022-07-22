#include<iostream>
using namespace std;

int main() {

    int number1, number2, sum, sub, mul, div;

    cout << "Enter two number: ";
    cin >> number1 >> number2;

    sum = number1 + number2;
    sub = number1 - number2;
    mul = number1 * number2;
    div = number1 / number2;

    cout << "Sum " << sum << endl;
    cout << "Sub " << sub << endl;
    cout << "Mul " << mul << endl;
    cout << "Div " << div << endl;

    return 0;
}