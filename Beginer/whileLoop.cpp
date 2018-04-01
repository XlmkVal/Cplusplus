#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    //int repetitions = 100;
    //int to_square = 1;
    int repetitions = 1;
    while(repetitions < 100){
        // now it's fixed
        cout << setw(3) << repetitions << setw(8) << pow(repetitions,2) << endl;
        //cout << to_square*to_square << endl;
        //--repetitions; // made a mistake - set the repetitions variable to increase, which is an infinite loop
        //++to_square;
        ++repetitions;
    }
    return 0;
}