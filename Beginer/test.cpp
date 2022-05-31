
#include<iostream>

using namespace std;

enum class Colors {black, blue, green, cyan, red, purple, yellow, white};

int main()
{
    Colors dogs;
    dogs = Colors::black;
    cout << dogs << endl;
    char c = 'n';
    cout << int{c} << endl;
    return 0;
}