// Calculate the area of a rectangle

#include <iostream>

int main()
{
    using namespace std;
    // initialization, I dont have to assign it actually

    int length;
    int width;

    cout << "Enter the length of your rectangle:" << endl;
    cin >> length;

    cout << "Enter the width of your rectangle:" << endl;
    cin >> width;

    int area = length * width;

    cout << "The area of your rectangle is : " << area << endl;

    return 0;
}