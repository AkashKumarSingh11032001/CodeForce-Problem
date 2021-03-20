#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int nos = (s.length() + 1) / 2;
    int res[nos];
    for (int i = 0; i < s.length(); i += 2)
    {
        int num = int(s[i]) - 48; 
        res[i / 2] = num;
    }
    sort(res, res + nos);
    for (int i = 0; i < nos; i++)
    {
        if (i == nos - 1)
        {
            cout << res[i];
            break;
        }
        cout << res[i] << "+";
    }
}