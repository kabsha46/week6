#include<iostream>
using namespace std;
 main()
 {
    int n;
    cout<<"enter the number of elements: ";
    cin >> n;
    if(n<=0)
    {
        cout<<"invalid input , number of elements must be greater than 0.";
    }
    int array[100];
    cout<<"enter "<< n <<"numbers ,one per line :"<<endl;
    for( int i=0; i<n;i++)
    cin>>array[i];

    cout<<"number in reverse ordre : ";
for(int i=n-1; i>=0; i--){
    cout << array[i]<<" ";
}

    cout<<"numbers in reverse order : ";
    for(int i=n-1; i>=0; i--){
        cout<<array[i]<< ":";
    }
    cout<<endl;
 }