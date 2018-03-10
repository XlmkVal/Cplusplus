// Test reading constantly and comparing the strings

#include<iostream>

using namespace std;

int main()
{
    string current = "hello", input = " ";
    while(cin >> input)
    {
        if(current==input)
        {
            cout << "The words are the same\n" << current + " " +input << endl ;
        }
        current = input;
    }

    return 0;
}