#include <bits/stdc++.h>
using namespace std;


int main () {

    int N;
    cin >> N;

    string str;
    cin >> str;
   
    
    

    char arr[N+1];
    strcpy(arr, str.c_str());
    int count =0;

    for(int i=0;i< N;i++){
        if(arr[i] == arr[i+1]){
            count++;
        }
    }
    cout << count;

    
}