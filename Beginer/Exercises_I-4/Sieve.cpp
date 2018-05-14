#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int numbers[100];
    int top = 10;

    for (int n = 0; n < 100; n++)
    {
        numbers[n] = 1;
    }

    int start = 2;
    while (start<=top){
        for(int i = start+1; i <= 100; i++)
        {
          if(i%start == 0)
          {
              numbers[i-1] = 0;
          }  
        }
        start++;        
    }
    int count = 1;
    for (int l : numbers)
    {
        cout << count << " " << l << endl;
        count++;
    }

    return 0;
}