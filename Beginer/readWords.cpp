/*
    Reads a stream of words,sorts and outputs the words. Terminate the stream with Ctrl+D
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<string> words;
    for(string input; cin>> input;)
    {
        words.push_back(words);
    }
    sort(words);
    for(int i: words)
    {
        cout << i << '\t';
    }
    // output just the unique words
    for(int i; i < words.size(); i++){
        if(i==0 || words[i] != words[i-1]){
            cout << i << '\t';
        }
    }
    return 0;
}