#include<iostream>

using namespace std;

constexpr int max = 1

void use(int n)
{
    constexpr int t1 = max+1; // will be ok
    constexpr int t2 = n + 1; // will not work
}

void use2(int n)
{
    const int t1 = max + 1; // will be ok
    const int t2 = n + 1; // will be ok
}

int main()
{
    const int n = 0;
    
    constexpr int l = 5;
    return 0;
}