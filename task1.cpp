#include<iostream>
using namespace std;
main()
{
    string fruit[] = {"peach", "apple", "guava", "watermelon"};
    int price[] = {60, 70, 40, 30};
    for(int idx = 0; idx<4; idx++)
    {
        cout<<"enter fruit"<<endl;
        cin>>fruit[idx];
        cout<<"enter price";
        cin>>price[idx];
    }
    int qauntity;
    string fname;
    cout<<"enter the name of fruit you want to buy"<<endl;
    cin>>fname;
    cout<<"enter the quantity of fruits "<<endl;
    cin>>qauntity;
    int total_price;
    for(int idx = 0; idx<4; idx++)
    {
        if(fname==fruit[idx])
        {
           total_price = price[idx]*qauntity;
        }
    }
    cout<<"total price is :"<<total_price;
}