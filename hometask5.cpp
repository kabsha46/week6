#include<iostream>
using namespace std;

main( )
{
    int customer;
    char letter;
    int count=0;
    cout<<"enter the name of cstomers:";
    cin>>customer;
    cout <<  "enter the name of"<<customer<<"customer"<<endl;
    string a[customer];
    for( int i=0; i<customer;i++)
    {
        if(a[i][0] == letter)
        {
            count=count+1;
        }
    }
    cout<<"total name staring with"<<letter<<", :"<<count;
}