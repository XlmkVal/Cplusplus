#include<iostream>

using namespace std;

int main()
{
    cout << "Hello, please enter an expression: ";
    int a =0;
    int b = 0;
    char op;
    int result = 0;
    cin >> a >> op >> b;
    if (op == '-')
        result = a - b;
    else if (op == '+')
        result = a + b;
    cout << result << endl;
    return 0;
}