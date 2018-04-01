/*
    Create a vector of distances between cities

*/

#include<iostream>
#include<vector>
#include<limits>

using namespace std;

int main()
{
    vector<double> distanceCollection;
    double shortest = numeric_limits<double>::max();
    double longest = numeric_limits<double>::min();
    double total = 0;
    double temp = 0;

    while (cin >> temp) {
        distanceCollection.push_back(temp);
        total += temp;
        if(temp < shortest)
            shortest = temp;
        if (temp > longest)
            longest = temp;
    }
    cout << "Shortest is " << shortest << endl;
    cout << "Longest is " << longest << endl;
    cout << "Median is " << total/distanceCollection.size() << endl;
    return 0;
}   