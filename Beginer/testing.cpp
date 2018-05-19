#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name;
    cout << "What is you name: ";
    cin >> name;
    cout << "Your name is " << name << endl;
    cout << name.length() << endl;
    return 0;
}