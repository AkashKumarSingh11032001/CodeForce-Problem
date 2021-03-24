#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k;
    cin >> k;

    if (k % 5 == 0)
    {
        cout << k / 5 << endl;
    }
    else
    {
        cout << (k / 5) + 1 << endl;
    }
}