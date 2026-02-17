// Lets convert degrees to Farenheight

#include <iostream>

int main()
{
    using namespace std;

    double degree;
    double farenheight;

    cout << "Enter the temperature in degrees that you ant to convert : " << endl;
    cin >> degree;

    farenheight = (degree * 9 / 5) + 32;

    cout << "The Temparature is : " << farenheight << " Farenheight " << endl;

    return 0;
}