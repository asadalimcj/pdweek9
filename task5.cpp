#include<iostream>
using namespace std;
main()
{
    int size;
    int count = 0;
    // bool flag = false;
    cout<<"enter size of string :";
    cin>>size;
    string array[size];
    for(int idx = 0; idx<size; idx++)
    {
        cout<<"enter a character :";
        cin>>array[idx];
    }
    for(int idx = 0; idx<size; idx++)
    {
        string rem = array[0];
        if(rem==array[idx])
        {
            count++;
        }

    }
    if(count==size)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}