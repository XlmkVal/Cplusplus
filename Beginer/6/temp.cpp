#include<iostream>
#include<vector>

using namespace std;

int main (){
    cout<< "Please start entering data: ";
    vector<int> myvec;
    int temp = 0;
    while(cin>>temp){
        myvec.push_back(temp);
    }
    for(int i = 0; i < myvec.size(); i++){
        cout << myvec[i] << endl;
    }
    return 0;
}