#include<iostream>
#include<string>

using namespace std;

int main()
{
    string john = "how";
    cout << john.length() << endl;
    int age;
    cin >> age;
    if(age <= 0 || age > 110){
        cout << "Error: You're kidding" << endl;
    }
}