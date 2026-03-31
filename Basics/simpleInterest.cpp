// Calculate Simple Interest = (Principal*Rate*Time)/100

#include <iostream>
using namespace std;

// declare variables
double simpleInterest(double principal, double rate, double time)
{
    return (principal * rate * time) / 100;
}

int main()
{
    double principal, rate, time, interest;

    cout << "Enter the principal:" << endl;
    cin >> principal;

    cout << "Enter the rate:" << endl;
    cin >> rate;

    cout << "Enter the time:" << endl;
    cin >> time;

    interest = simpleInterest(principal, rate, time);

    cout << "The SI = :" << interest << endl;

    return 0;
}