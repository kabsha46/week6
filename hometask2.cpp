#include<iostream>
using namespace std;

main( )
{
    int n;
    cout <<" enter the numbers of elements";
    cin >> n;
    cout << "enter"<<n<<"number"<<endl;
    int a[n];
    int evencount=0;
    for( int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2== 0)
        {
            evencount=evencount+1;
        }
    }
    cout <<"total sum of even numbers is:"<<evencount;
}
