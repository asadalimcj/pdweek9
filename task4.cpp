#include<iostream>
using namespace std;
main()
{
    int size, rem;
    int count = 0;
    cout<<"enter size of array :";
    cin>>size;
    int array[size];
    for(int idx = 0; idx<size; idx++)
    {
        cout<<"enter an array of numbers:";
        cin>>array[idx];
    }
    for(int idx = 0; idx<size; idx++)
    {
        while(array[idx]>0)
        {
            
               rem = array[idx]%10;
               array[idx] = array[idx]/10;
                if(rem==7)
                {
                  count++;
                }
        }
    }
       
    
        if(count>0)
        {
            cout<<"Boom ";
        }
        else
        {
            cout<<"there is no 7 in array:";
        }

}   