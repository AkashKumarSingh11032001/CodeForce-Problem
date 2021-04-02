#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int inc_count = 1;
    int max_count = 0;

    for (int i = 0; i < n-1; i++)
    {
        /* code */

        if (arr[i] > arr[i + 1])
        {
            
            if (inc_count > max_count)
            {
                max_count = inc_count;
            }
            inc_count = 1;
            
        }
        else
        {
            inc_count++;
        }
    }
    max_count = max(max_count,inc_count);
    cout << max_count;
}