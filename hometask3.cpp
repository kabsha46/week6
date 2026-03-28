#include<iostream>
using namespace std;

main( )
{
    int elements;
    cout<<"enter the numbers of elements";
    cin>> elements;
    cout<<" enter"<<elements<<"numbers:"<<endl;
    int a[elements];
    for (int i=0;i<elements;i++)
    {
        cin>>a[i];

    }
    int largest = a[0];
    int smallest;
    for(int i=1;i<elements;i++)
    {
        if(a[i]>largest){
            largest=a[i];

        }
        else {
            smallest=a[i];

        }
    }
    cout <<"largest number is "<<largest<<endl;
    cout<<"smallest number is "<<smallest<<endl;

}