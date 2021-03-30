#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, o, c;
    cin >> r >> o >> c;
    int max = (20 - o) * 6 * 6;
    if (r - c < max)
        cout << "YES";
    else
        cout << "NO";
}