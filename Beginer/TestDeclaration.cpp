#include<iostream>

using namespace std;

double mult(double n)
{
    return n*2;
}

double mult(int n)
{
    return n*3;
}

int main ()
{
    cout << mult(3) << " " << mult(2.0);
    return 0;
}