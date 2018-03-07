/*
Here we will test how the cin command works in C++
*/

#include<iostream>

using namespace std;

int main()
{
    cout << "Hello, we will try to read line with multiple words \n";
    string name;
    int age;
    string other_text;
    cin >> name >> other_text >> age;
    cout << "The result is " << name << other_text << age << endl;  
    cout << "As you see the result is bad\n";
    cout << name + other_text << endl;
    return 0;
}