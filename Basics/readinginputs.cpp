#include <iostream>
using namespace std;

double sum(double a, double b)
{
    double c = a + b;
    return c;
}

int main()
{
    double a, b;
    cout << "Input two numbers" << endl;
    cin >> a >> b;

    cout << "The sum of those two numbers are:" << sum(a, b) << endl;

    return 0;
}
