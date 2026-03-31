// Ask for three numbers and print the average
#include <iostream>
#include <cmath>
using namespace std;

void AverageOfThreeNumbers(double Num1, double Num2, double Num3, double &Average)
{
    Average = (Num1 + Num2 + Num3) / 3;
}

int main()
{
    // variables declaration
    double Num1, Num2, Num3, Average;

    cout << "Enter first number" << endl;
    cin >> Num1;
    cout << "Enter second number" << endl;
    cin >> Num2;
    cout << "Enter third number" << endl;
    cin >> Num3;
    // Call the void function and its params
    AverageOfThreeNumbers(Num1, Num2, Num3, Average);
    cout << "The average of the three numbers are:" << Average << endl;

    return 0;
}