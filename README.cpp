#include <iostream>
#include <iomanip>  // for formatting output
#include <sstream>  // for processing the arithmetic expression
using namespace std;

// Function to generate and display the n*n multiplication table
void printMultiplicationTable(int n) {
    cout << "Multiplication Table (" << n << "x" << n << "):" << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << setw(4) << i * j;  // Align output in a table format
        }
        cout << endl;
    }
}

// Function to evaluate a basic arithmetic expression
void evaluateArithmeticExpression() {
    string expression;
    cout << "Enter an arithmetic expression (e.g., 5+3, 12/4): ";
    cin >> expression;

    stringstream ss(expression);
    double num1, num2;
    char op;
    ss >> num1 >> op >> num2;

    double result;
    bool valid = true;  // Flag to check if the operation is valid

    switch (op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                valid = false;
            }
            break;
        default:
            cout << "Error: Invalid operator. Please use +, -, *, or /." << endl;
            valid = false;
            break;
    }

    if (valid) {
        cout << "Result: " << result << endl;
    }
}

int main() {
    int n;

    // Get user input for multiplication table
    cout << "Enter a number for the multiplication table: ";
    cin >> n;
    printMultiplicationTable(n);

    // Perform arithmetic operation
    evaluateArithmeticExpression();

    return 0;
}
