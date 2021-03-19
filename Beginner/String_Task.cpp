#include <bits/stdc++.h>
using namespace std;

int main() {

    string word;
    cin >> word;

    transform(word.begin(), word.end(), word.begin(), ::tolower);
    
    char char_array[word.length() + 1];

    strcpy(char_array, word.c_str()); // convert into array of char

    for(int  i = 0; i< word.length() ; i++){
        if(char_array[i] == '\0' || char_array[i] == 'a' || char_array[i] == 'e' || char_array[i] == 'i' || char_array[i] == 'o' || char_array[i] == 'u' || char_array[i] == 'A' || char_array[i] == 'E' || char_array[i] == 'I' || char_array[i] == 'O' || char_array[i] == 'U' || char_array[i] == 'Y' || char_array[i] == 'y' ){
            continue;
        }else{
            cout<< "." <<char_array[i];
        }
    }






}