//Perform the practice task

#include<iostream>

using namespace std;

int main()
{
    cout << "How old are you: \n";
    int age;
    cin >> age;
    cout << "You are " << age << " years old or " << age*12 << " months old" << endl;
    cout << "Let's try more accurate: ";
    double ageD;
    cin >> ageD;
    cout << "More accuratly your age is " << ageD*12.0 << endl;
    return 0;
}