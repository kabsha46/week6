#include<iostream>
#include<string>
using namespace std;
main( )
{
 for( int i=0; word[i]!='\0'; i++)
 {
    cout << word[i]<<"found at position "<< i <<endl;
 }
}
int main( )
{
    char word[100];
    cout << "enter a word: ";
    cin>>word;
    showLocations(word);
    return 0;
}