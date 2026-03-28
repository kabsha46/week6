#include<iostream>
using namespace std;
main()
{
    bool isSpecial(int array[ ], int size)
     {  
        for ( int i=0; i<size; i++)
        {
            if(i%2 ==0 && array[i] %2!=0)
            cout << "false";

        if(i%2!=0 && array[i]%2==0)
        cout<<"false";
        }
}}