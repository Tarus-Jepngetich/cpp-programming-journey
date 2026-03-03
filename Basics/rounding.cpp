#include <iostream>
#include <cmath>
using namespace std;

void calculations(double a, double b, double &sum, double &product)
{
    sum = a + b;
    product = a * b;
}

int main()
{

    double a, b;
    cout << "Input two numbers:" << endl;
    cin >> a >> b;

    double sum, product;
    calculations(a, b, sum, product);

    cout << "The Sum is:" << sum << endl;

    cout << "The Product is:" << product << endl;

    cout << "The Rounded up results of product are:" << ceil(product) << endl;
    cout << "The Rounded up results of sum are:" << ceil(sum) << endl;

    cout << "The Rounded down results of product are:" << floor(product) << endl;
    cout << "The Rounded down results of sum are:" << floor(sum) << endl;
    return 0;
}