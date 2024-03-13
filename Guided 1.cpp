#include <iostream>
using namespace std;
// Main program
int main()
{
    char op;
    float num1, num2;
    // It allows user to enter operator i.e. +,-,*,/
    cin >> op;
    // It allow user to enter operands
    cin >> num1 >> num2;
    // switch statement begins
    switch (op)
    { 
    //If user enter +
    case '+':
        cout << num1 + num2;
        break;
    // If user enter -
    case '-':
        cout << num1 - num2;
        break;
    //If user enter *
    case '*':
         cout << num1 * num2;
        break;
     //If user enter /
    case '/':
         cout << num1 / num2;
        break;
    // f the operator is other than +, -, * or /,
    // error message will display
    default:
        cout << "Error! operator is not correct";
        }// Switch statement ends
     return 0;

}