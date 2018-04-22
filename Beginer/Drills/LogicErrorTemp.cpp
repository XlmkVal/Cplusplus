#include<iostream>
#include<limits>
#include<vector>

using namespace std;

int main()
{
    double temp_min = 0;
    double temp_max = 0;
    double sum = 0;
    vector<double> temps;

    for(double temp; cin >> temp)
    {
        if temp<temp_min temp_min = temp;
        if temp>temp_max temp_max = temp;
        sum += temp;
    }

    cout << "Max temp is " << temp_max << ", min temp is " << temp_min << " and the average is " << sum/temps.size();

    return 0;
}