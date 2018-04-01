/*
    Have the programm try to guess number between 1 and 100

*/

#include<iostream>

using namespace std;

int main()
{   
    cout << "Hello, lets try to guess your number" << endl;
    int max = 100;
    int min = 0;
    int temp = 50;
    char answer ='n';
    char answer2='n';

    for (int i=0; i < 7; i++)
    {
        cout << "Is your number " << temp << endl;
        cin >> answer;
        if (answer == 'n')
        {
            cout << "is your number greater than " << temp << endl;
            cin >> answer2;
            if(answer2 == 'y')
            {
                min = temp;
                temp = (min+max)/2;
            }
            else
            {
                max = temp;
                temp = (min+max)/2;
            }
        }
        else
        {
            cout << "Great, your number is " << temp << endl;
            break;
        }   
    }
    return 0;
}