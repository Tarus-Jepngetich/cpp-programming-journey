// calculate BMI of a person. Formula: BMI=(Weight(Kgs) / Height(Meters)2)

#include <iostream>
#include <cmath>
using namespace std;

// not planning for it to return anything
void BMICalculator(double height, double weight, double &BMI)
{
    BMI = weight / (height * height);
}

int main()
{
    double height, weight, BMI;

    cout << "Enter your Weight in Kgs:" << endl;
    cin >> weight;

    cout << "Enter your Height in meters:" << endl;
    cin >> height;

    BMICalculator(height, weight, BMI);
    cout << "Your BMI is:" << BMI << endl;

    return 0;
}
