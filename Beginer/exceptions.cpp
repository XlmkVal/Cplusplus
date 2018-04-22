#include<iostream>
#include<vector>
#include"../std_lib_facilities.h"

using namespace std;

int main()
{
    try {
        vector<int> n = {1,2,3,4,5,6};
        cout << n[6];
    }
    catch(exception& e){
        cerr << "error:" << e.what() << endl;
        keep_window_open(); // part of std_lib_facilities.h
        return 1;
    }
    catch(...){
        cerr << "unknown\n";
        return 2;
    }
}