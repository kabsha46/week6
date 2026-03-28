#include<iostream>
using namespace std;

main( )
{
    int n;
    cout<<"enter the number of flights: ";
    cin>>n;
    int flight_num [n];
string flight_name[n]={};
string destination[n]={};
float seats[n]={};
cout<<endl;
for(int i=0; i<n; i++)
{
    cout <<"enter the number of flight for flight"<<i+1<<" : ";
    cin>>flight_num[i];
    cout<<"Enter the destination for flight "<<flight_num[i]<<": " ;
        cin >> destination[i];
        cout<<"Enter the seats available for flight "<<flight_num[i]<<" : ";
        cin>>seats[i];
        cout<<endl;
}
cout<<"\nFLIGHT INFORMATION "<<endl;
cout<<"----------------------"<<endl;
for(int i=0; i<n; i++)
{
    cout<<"flight"<<flight_num[i]<<"to"<<destination[i]<<"has "<<seats[i]<<"seats avaiable"<<endl;
}
cout<<"\nflight with less then 5 seats avaiable "<<endl;
cout<<"----------------------------------------------------"<<endl;
 for(int i=0 ; i< n ; i++)
    {
     cout<<"Flight "<<flight_num[i]<<" to "<<destination[i]<<" has "<<seats[i]<<" seats available "<<endl;
    }
    cout<<"\nFlight with less than 5 seats available:"<<endl;
    cout<<"----------------------------------------"<<endl;
    for(int i=0 ; i<n; i++)
    {
        if(seats[i] < 5)
        {
          cout<<"Flight "<<flight_num[i]<<" to "<<destination[i]<<" has only "<<seats[i]<<" seats left! "<<endl;  
        }
        else
        {
            cout<<"No flights with less than 5 seats available "<<endl;
        }
    }