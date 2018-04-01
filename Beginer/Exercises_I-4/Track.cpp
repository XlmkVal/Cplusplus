/* 
    Track which number is smallest so far and which is largest so far
    
*/

#include<iostream>

using namespace std;

int main()
{
    double smallest = 0;
    double largest = 0;
    double current = 0;
    cin >> current;
    smallest = current;
    largest = current; 
    while(cin >> current){
        if(current < smallest){
            smallest = current;
            cout << smallest << " Is the smallest number yet\n";
        }
        else if (current > largest)
        {
            largest = current;
            cout << largest << " Is the largest number yet\n";
        }
        else
        {
            cout << "There is no change, smallest is " << smallest << ", and the largest is " << largest << endl;
        }
    }
    return 0;
}