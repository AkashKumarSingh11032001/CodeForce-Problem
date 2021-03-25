#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    int a, b, cal = 0, x = 0;

    while (T--)
    {
        /* code */
        cin >> a >> b;
        cal -= a;
        cal += b;
        if (cal > x)
        {
            x = cal;
        }
    }
    cout << x;
}