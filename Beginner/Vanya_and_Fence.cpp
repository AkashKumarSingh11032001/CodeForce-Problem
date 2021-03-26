#include <bits/stdc++.h>
using namespace std;


int main() {

    int per, heigt;
    cin >> per >>heigt;

    int sum =0;

    int arr[per];
    for(int i=0;i<per;i++){
        cin >>arr[i];
    }

    for (int i = 0; i < per; i++)
    {
        /* code */
        if(arr[i] <= heigt){
            sum += 1;
        }else{
            sum += 2;
        }
    }
    cout << sum <<endl;


}