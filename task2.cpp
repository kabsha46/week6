#include <iostream>
using namespace std;

void postmortem(string word)
 {string nextLetter(string word) ;{
    for (int i = 0; word[i] != ''; i++) {
        if (word[i] == 'z')
            word[i] = 'a';          
        else if (word[i] == 'Z')
            word[i] = 'A';         
        else if (isalpha(word[i]))
            word[i] = word[i] + 1;  
    }
    
}
int main()
 {
    string word;
    out << "Enter a String: ";
    getline(cin, word);
    cout << "Shifted String: " << nextLetter(word) << endl;
  
}