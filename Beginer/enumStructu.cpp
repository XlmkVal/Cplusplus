#include<iostream>

using namespace std;

enum levels
{
    rookie,
    corporal,
    sergeant,
    general
} first, second;

int main (){
    first = general;
    cout << first;
    return 0;
}