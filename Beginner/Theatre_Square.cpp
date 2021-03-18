#include <bits/stdc++.h>
using namespace std;

int main()
{

    unsigned long long int m, n, a;
    cin >> n >> m >> a;

    unsigned long long int value = ceil((double)m / a) * ceil((double)n / a);
    cout << value << endl;
    return 0;
}