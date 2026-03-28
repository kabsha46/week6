#include<iostream>
using namespace std;

main( )
{

    int a;
    cout<<"enter the numbers of products :" ;
    cin>>a;
string productname[n] ={};
 float price[n]={};
  float quantity[n]={};
    for(int i=0 ; i< n ;i++)
    {
        cout<<"enter the name of product: "<<i+1;
        cin>>productname[i];
        cout<<"enter the price of "<<productname[i]<<"$";
        cin>>price[n];
        cout<<"enter the quantity of"<<productname[i] ;
        cin>>quantity[i];
    }
cout<<"product   inventry report "<<endl;
cout<<"------------------------------"<<endl;
 for (int i=0; i<n ; i++)
 {
    cout <<productname[i]<<"$"<<price[i]<<","<<quantity[n]<"in stock , total value :$"<<price[i]*quantity[i]<< endl;

 }
}