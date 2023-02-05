#include<iostream>
using namespace std;
main()
{
    string name;
    int kgs,bill;
    string fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]= {60,70,40,30};
    cout<<"Enter name of the fruit: ";
    cin>>name;
    cout<<"Enter number of kgs of the fruit: ";
    cin>>kgs;
    if(name==fruit[0])
    {
        bill = price[0]*kgs;
    }
    if(name==fruit[1])
    {
        bill = price[1]*kgs;
    }
    if(name==fruit[2])
    {
        bill = price[2]*kgs;
    }
    if(name==fruit[3])
    {
        bill = price[3]*kgs;
    }
    cout<<"Your total bill is: "<<bill;
}