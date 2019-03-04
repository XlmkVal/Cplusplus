#include<iostream>

using namespace std;

class C
{
    public:
    int l = 0 ;
    int *p = new int(l);
    C (){};
};

int main ()
{
    int n(3);
    C c{};
    cout << c.l << endl;
    return 0;
}