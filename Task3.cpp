#include<iostream>
using namespace std;
main()
{
    string word;
    int c;
    cout<<"Enter a word: ";
    cin>>word;
    c = word.length();
    if(c%2==0)
    {
        cout<<"True";
    }
    else
    {
        cout<< "false";
    }
}