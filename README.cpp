#include <iostream>
#include <iomanip>  
#include <sstream>  
using namespace std;


void printMultiplicationTable(int n) {
    cout << "Multiplication Table (" << n << "x" << n << "):" << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << setw(4) << i * j;  
        }
        cout << endl;
    }
}


void evaluateArithmeticExpression() {
    string expression;
    cout << "Enter an arithmetic expression (e.g., 5+3, 12/4): ";
    cin >> expression;

    stringstream ss(expression);
    double num1, num2;
    char op;
    ss >> num1 >> op >> num2;

    double result;
    bool valid = true;  

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

    
    cout << "Enter a number for the multiplication table: ";
    cin >> n;
    printMultiplicationTable(n);

    
    evaluateArithmeticExpression();

    return 0;
}
