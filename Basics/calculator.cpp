#include <iostream>
#include <limits> // for numeric_limits
using namespace std;

int main()
{
    double a, b;

    // Validate number input
    while (true)
    {
        cout << "Enter two numbers: ";
        if (cin >> a >> b)
            break;

        cout << "Invalid input. Please enter numbers only.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    char op;

    // Validate operator input
    while (true)
    {
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        if (op == '+' || op == '-' || op == '*' || op == '/')
            break;

        cout << "Invalid operator. Try again.\n";
    }

    // Division by zero validation
    if (op == '/' && b == 0)
    {
        cout << "Error: cannot divide by zero.\n";
        return 0;
    }

    double result = 0;

    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    }

    cout << "Result: " << result << endl;
    return 0;
}