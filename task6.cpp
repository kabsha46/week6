#include<iostream>
using namespace std;
main( )
{
    int numbers[5]={1, 2, 3, 4, 5};
    int sum=0;
    for(int i=0; i<5; i=i+1)
    {
        sum = sum + numbers[i];
    }
    float average = sum / 5.0;
    cout << "sum="<<sum<<endl;
    cout <<"average = "<<average <<endl;
}