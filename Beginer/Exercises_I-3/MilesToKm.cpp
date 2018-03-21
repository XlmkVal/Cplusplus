#include<iostream>

using namespace std;

int main()
{
    constexpr double kmPerMile = 1.609;
    cout << "Please input the distance in miles: ";
    double miles=0;
    cin >> miles;
    cout << "The distance in Km is " << miles * kmPerMile << endl;
    return 0;
}