#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k, n, w;
    cin >> k >> n >> w;

    int cost = 0;

    for (int i = 1; i <= w; i++)
    {
        cost += i * k;
    }
    //cout << cost <<endl;

    if(cost <= n){
        cout << 0 <<endl;
    }else {
        cout << cost - n <<endl;
    }
}