//Test arithmetic operators

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double t = 8;
    t = sqrt(t);
    cout << t << endl; 
    int number = 3;
    cout << number++ << endl;
    cout << number << endl;
    cout << ++number << endl;
    double test = 1.2;
    cout << 9/5*test+25 << endl;
    cout << double{9}/5 * test + 25 << endl;

    int unit1 = 0;
    char c;
    cout << "Enter the size and unit: \n";
    cin >> unit1 >> c;
    cout << unit1 << endl << c << endl;
    return 0;
}