#include <iostream>
using namespace std;

class Calculator {
public:
    double a, b;
    string operation;

    Calculator(double x, double y, string op) {
        a = x;
        b = y;
        operation = op;
    }

    double calculate() {
        if (operation == "add")
            return a + b;
        else if (operation == "subtract")
            return a - b;
        else if (operation == "multiply")
            return a * b;
        else if (operation == "divide") {
            if (b == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
        } else {
            cout << "Invalid operation type!" << endl;
            return 0;
        }
    }
};

int main() {
    double x, y;
    string op;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Enter operation (add/subtract/multiply/divide): ";
    cin >> op;

    Calculator calc(x, y, op);
    double result = calc.calculate();

    cout << "Result: " << result << endl;

    return 0;
}
