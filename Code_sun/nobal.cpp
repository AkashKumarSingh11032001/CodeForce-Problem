#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll test;
    cin >> test;
    while (test--)
    {
        /* code */
        ll N, M, temp;
        cin >> N >> M;
        ll a[N];
        set<ll>x;
        for (ll i = 0; i < N; i++)
        {
            /* code */
            cin >> a[i];
            x.insert(a[i]);
        }
        if (M>x.size())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}