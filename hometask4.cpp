#include<iostream>
using namespace std;

main( )
{
    int elements =5;
    cout<<" enter the name  of"<<elements<<"students"<<endl;
    string a[elements];
    for(int i=0;i<elements;i++)
    {
        getline(cin,a[i]);

    }
    cout<<endl<<"student name area :"<<endl;
    for(int i=0;i<elements;i++)
    {
        cout<<a[i]<<endl;
    }


}