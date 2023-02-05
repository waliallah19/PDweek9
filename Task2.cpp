#include<iostream>
using namespace std;
main()
{
    string name;
    float price;
    string movie[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
    cout<<"Enter name of the movie: ";
    cin>>name;
         if(name==movie[0] ||name==movie[2] || name==movie[4])
         {
            price = 450;
         }
         else
         {
            price = 475;
         }
    cout<<"Your bill is Rs. "<<price;
}