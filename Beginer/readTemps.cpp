/*
    This program would read the temperatures from the input as floating point numbers
    and write them to a vector
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<double> temps;
    for(double temp; cin >> temp;)
    {
        temps.push_back(temp);
    }
    for(int i : temps)
    {
        cout << i << endl;
    }
    return 0;
}