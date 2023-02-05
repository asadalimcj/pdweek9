#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"enter size of array :";
    cin>>size;
    int arr[size];
    cout<<"enter number";
    for(int idx = 0; idx<size; idx++)
    {
        cin>>arr[idx];
    }
    int tran;
    cout<<"enter the even- odd transformation";
    cin>>tran;
    for(int idx = 0; idx<size; idx++)
    {
        if(arr[idx]%2!=0)
        {
            arr[idx] = arr[idx]+(2*tran);
        }
        else
        {
            arr[idx] = arr[idx]+(-2*tran);
        }
    }

    for(int idx = 0; idx<size; idx++)
    {
        cout<<arr[idx]<<" ";
    }

}