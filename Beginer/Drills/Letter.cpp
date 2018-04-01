#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name1 = "dod";
    string name;
    cout << "Hello, what is your name? \n";
    cin >> name;

    cout << "Hello, " << name << endl;
    
    cout << "Who do you want to write? \n";
    string person;
    cin >> person;

    cout << "Hello " + person + ", \n";
    cout << "\t How are you? \n";
    cout << "\t What have you being doing? \n";

    string friends_name = "John";
    cout << "\t Have you seen " << friends_name << endl;

    char sex = '0';
    cout << "What is your frind gender \n";
    cin >> sex;
    
    return 0;
}