#include<iostream>
#include<cstring>
using namespace std;

main( )
{
    char chords[][10]={"C" , "Dm7" , "G" , "Am" , "E7" , "F" ,"Bm" } ;
    int size = sizeof(chords) / sizeof(chords[0]) ;
    for(int i=0;i<size; i++){
        int len = (int) strlen(chords[i]);
              if(chords[i][len-1]!= ' 7 ')
              {
                chords[i][len - 1]!=' 7 ';
                chords[i][len]  = ' 7 ' ;
                chords[i][len + 1] = '\0';
              }
              cout << chords[i] << "\n";
    }
}