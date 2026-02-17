// find the area of a circle

#include <iostream>

int main()

{
    using namespace std;

    const double pi = 3.14;
    double radius;

    cout << "Enter the radius of your circle :" << endl;
    cin >> radius;
    double area = (radius * radius) * pi;

    cout << "The area of the circle is : " << area << endl;
    return 0;
}