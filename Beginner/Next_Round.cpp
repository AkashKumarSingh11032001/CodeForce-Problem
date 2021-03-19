#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,k;
    cin >> n >> k ;

    int arr[n];
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    for( int i = 0 ; i < n ; i++) {
        if (arr[i] > 0 && arr[i] == k && arr[i] == arr[i+1]){
            cout <<  << endl;

        }else if (k < 0){
            cout << "0" <<endl;
        }else {
            continue;
        }

    }
    return 0;
}