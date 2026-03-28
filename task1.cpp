#include <iostream>
using namespace std;

void postmortem(string word)
 {
    
    for (int i = 0; word[i] != '\0'; i++) 
    {
        cout << word[i] << " found at position " << i << endl;
    }
}

main() 
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    postmortem(word);
    
}