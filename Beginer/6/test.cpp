
#include <vector>
#include <cstdlib>
#include <iostream>
#include <utility>
#include <string>

using namespace std;

void insert(vector<pair<string,double>> &vec)
{
    string str;
    double value = 0;
    cin >> str >> value;
    while(str != "NoName" && value != 0){
        vec.push_back(make_pair(str, value));
        cin >> str >> value;
    }
}

int main(int argc, char const *argv[])
{
    vector<pair<string, double>> v;
    insert(v);
    for(auto var : v)
    {
        cout << var.first << " " << var.second << endl;
    }
    return 0;

}