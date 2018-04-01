#include<iostream>

using namespace std;

int main()
{
    int n,m;
    // while( cin >> n && cin >>  m){
    //     cout << n << ' ' << m << endl;
    // }
    while(cin >> n && cin >> m){
        if (n > m)
        {
            cout << "the bigger number is " << n << endl;
            cout << "The smaller number is " << m << endl;
        }
        else if (n < m)
        {
            cout << "the bigger number is " << m << endl;
            cout << "The smaller number is " << n << endl;
        }
        else
            cout << "The numbers are equal" << endl;
    }
    return 0;
}