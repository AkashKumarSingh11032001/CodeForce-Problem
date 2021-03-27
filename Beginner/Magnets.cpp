#include <bits/stdc++.h>
using namespace std;

int main() {


    int n;
    cin >> n;

    int count =1;

    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        /* code */
        if(arr[i] != arr[i+1]){
            count++;
        }
    }
    cout << count;
    
}