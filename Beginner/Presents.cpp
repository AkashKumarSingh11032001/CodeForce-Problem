#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> giver(n+1);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        int reciver;
        cin >> reciver;
        giver[reciver] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        /* code */
        cout<< giver[i] <<" ";
    }
    
    


}