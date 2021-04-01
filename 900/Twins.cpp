#include <bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{

    ll n;
    cin >> n;

    long long arr[n];
    ll sum = 0;

    for (ll i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
        sum += arr[i];
    }
    sum /= 2;
    sort(arr, arr + n);

    ll count=0, rev_sum = 0;

    for (ll i = n-1; i >= 0; i--)
    {
        /* code */
        rev_sum += arr[i];
        count++;
        if (rev_sum > sum)
            break;
    }
    cout << count << endl;
}