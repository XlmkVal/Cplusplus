#include<iostream>
#include<vector> 


using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << numbers.size() << endl;
    long riceGrains = 1;
    for(int i=2; i <= 64; i++)
    {
        riceGrains = riceGrains*2;
        if(riceGrains > 1000000000){
            cout << "You need " << i << "for 1 billion" << endl;
        }
        else if (riceGrains > 1000000)
        {
            cout << "you need " << i << "for one million" << endl;
        }
    }
    return 0;
}