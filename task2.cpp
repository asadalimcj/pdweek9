#include<iostream>
using namespace std;
main()
{
    string movie[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    int price = 500;
    string mname;
    cout<<"enter the name of movie you want to watch";
    cin>>mname;
    int bill ;
    for(int idx = 0; idx<5; idx++)
    {
        if(idx%2!=0 && (movie[idx]==mname))
        {
            bill = price-(price*5)/100;

        }
        else if(movie[idx]==mname)
        {
            bill = price-(price*10)/100;
        }
    } 
    cout<<"your bill is :"<<bill;
}