#include<iostream>
using namespace std;

main( )
{
    int elements;
    cout<<"enter  number of student";
    cin>>elements;
    string name[elements];
    cout<<"enter name of "<<elements<<"students :"<<endl;
    for(int i=0; i<elements; i++)
    {
        cin>>name[i];
    }
    for(int i=0 ; i<elements;i++ )
       {
        for(int j=i+i; j< elements; j++){
            string alpha;
            if (name[i]   >name[j])
            {
                alpha=name[i];
                name[i]=name[j];
                name[j]=alpha;
            }
       }
       cout<<"in asscending alphabatical name are "<< endl;
        for(int i=0 ; i< elements; i++)
    {
        cout<< name[i]<<endl;
    }
{
    for(int i=0 ;i<elements; i++)
        for(int j=i+1; j<elements ; j++)
        {
            string alpha;
         if(name[i]<name[j])
         {
            alpha=name[i];
            name[i]=name[j];
            name[j]=alpha;
         }
        }
        cout<<"In descending alphabetical name are "<<endl;
    for(int i=0 ; i< elements; i++)
    {
        cout<< name[i]<<endl;
    }
}
}
}