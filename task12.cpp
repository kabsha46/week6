#include<iostream>
using namespace std;
main()

{
    int first[2],second[100],result[102];
    int n;
    cout<<"enter the number of element for first array";
    cin>>n;
    cout<<"enter the 2nd element for the second array ";
    for(int i=0; i < 2; i++){
        cin>>second[i];
    }
    inserMiddle(first, second, result, n);
    cout<<"resulting array : [ ";
    for(int i=0; i<2+n; i++ )
    {
        cout<<result[i];
        if(i < n + 1)
        cout<<",";

    }
    cout<<"]" << endl;

    result[0] = first[0];
    for(int i=0; i<n; i++)
    {
        result[1+i] = second[i];
    result[1+n] = first [1];
    }

}