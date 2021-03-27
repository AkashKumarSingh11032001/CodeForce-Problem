#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        /* code */
        if (i % 2 == 0)
        {
            cout << "I love that ";
        }
        else
        {
            cout << "I hate that ";
        }
    }
    if (n % 2 == 0)
    {
        cout << "I love it " << endl;
    }
    if (n % 2 == 1)
    {
        cout << "I hate it " << endl;
    }
}