#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"enter size of array:";
    cin>>size;
    string cols[size];
    int sum = 2*size;
   
    for(int idx = 0; idx<size; idx++)
    {
        cout<<"enter colours: ";
        cin>>cols[idx];
    }
    
    for(int idx = 0; idx<size-1; idx++)
    {
        if(cols[idx]!=cols[idx+1])
        {
            sum++;
        }
        
    }

   
    
        cout<<sum;
    
}