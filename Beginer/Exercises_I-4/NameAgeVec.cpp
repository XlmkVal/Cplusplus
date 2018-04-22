#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool checkNames(string tname, vector<string> &name)
{
    for (size_t i = 0; i < name.size(); i++)
    {
        if(name[i] == tname)
        {
            return false;
        }
    }
        return true;
}

int main()
{
    vector<string> name;
    vector<int> age;
    string tempName;
    int tempAge;
    while(cin >> tempName && cin >> tempAge && tempName != "NoName" && tempAge != 0){
        cout << tempAge << endl;
        // if (tempName != "NoName" && tempAge != 0)
        // {
            if(checkNames(tempName, name))
            {
                name.push_back(tempName);
                age.push_back(tempAge);
            }
            else
            {
                cout << "this name is already in the vector\n";
                break;
            }
        // }
        // else
        //     break;
    }
    return 0;
}