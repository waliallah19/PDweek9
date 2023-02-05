#include<iostream>
using namespace std;
main()
{
    int size,num,a=0;
     cout<<"Enter the total count of numbers: ";
    cin>>size;
    int arr[size];
     for(int idx = 0; idx<size; idx++)
    {
        cout<<"Enter number: ";
        cin>>arr[idx];
    }
    for(int idx = 0; idx<size; idx++)
    {
        if(arr[idx]%10==7)
        {
            cout<<"Boom!";
            break;
        }
        else
        {
            a=a+1;
        }
    }
    if(a==size)
    {
        cout<<"There is no 7 in the array.";
    }
}