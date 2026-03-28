#include<iostream>
using namespace std;

main()
{
    int elements ;
    cout<<"enter the numbers of  elements ";
    cin >> elements ;
    cout << "enter "<< elements<<"numbers" <<endl;
    int a[elements];
    int sum=0;
    for( int i=0;i<elements;i++)
    {
        cin>>a[i];
        sum=sum+a[i];

    }
    cout<<"sum of all elements";
    
}