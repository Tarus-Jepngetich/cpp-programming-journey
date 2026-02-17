// Swap two numbers

#include <iostream>

int main()
{
    using namespace std;

    int num1;
    int num2;

    cout << "Enter the First Digit : " << endl;
    cin >> num1;

    cout << "Enter Second digit : " << endl;
    cin >> num2;

    int Z = num1;
    num1 = num2;
    num2 = Z;

    cout << "The First Digit is : " << num1 << "The Second Digit is : " << num2 << endl;

    return 0;
}