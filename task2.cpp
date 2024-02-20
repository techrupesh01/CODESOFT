#include <iostream>

using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Welcome to Simple Calculator" << endl;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Error! Invalid operator." << endl;
    }

    return 0;
}
