#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"enter the string :";
    cin>>name;
    int length = name.length();
    if(length%2==0)
    {
        cout<<"string is even";
    }
    else
    {
        cout<<"string is odd";
    }
}