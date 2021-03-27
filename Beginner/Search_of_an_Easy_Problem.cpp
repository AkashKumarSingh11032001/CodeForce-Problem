#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n+1];
    for(int i=0;i < n; i++){
        cin >> arr[i];
    }
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i] == 1){
            count++;

        }
    }

    if(count >= 1){
        cout << "HARD" <<endl;
    }else{
        cout << "EASY" <<endl;
    }
    
    
}