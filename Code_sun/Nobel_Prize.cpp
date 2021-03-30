#include <bits/stdc++.h>
using namespace std;

bool areEqual(int arr1[], int arr2[], int n, int m)
{
    // If lengths of array are not equal means
    // array are not equal
    if (n != m)
        return false;

    // Sort both arrays
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    // Linearly compare elements
    for (int i = 0; i < n; i++)
        if (arr1[i] != arr2[i])
            return false;

    // If all elements were same.
    return true;
}

int main()
{

    int T;
    cin >> T;

    int N, M;

    while (T--)
    {
        /* code */
        cin >> N >> M;

        int arr[N];
        for (int i = 0; i < N; i++)
        {
            /* code */
            cin >> arr[i];
        }
        

        //remove dublicaate
        for (int i = 0; i < N; ++i)
        {
            for (int j = i + 1; j < N;)
            {
                if (arr[i] == arr[j])
                {
                    for (int k = j; k < N - 1; ++k)
                        arr[k] = arr[k + 1];

                    --N;
                }
                else
                    ++j;
            }
        }
        

        int M_arr[M];
        int x = 1;
        for (int i = 0; i < M; i++)
        {
            /* code */
            M_arr[i] = x;
            x++;
        }
        
        // chck two arry elemt

        int s_arr = sizeof(arr) / sizeof(int);
        int m_arr = sizeof(M_arr) / sizeof(int);

        //bool res = areEqual(arr, M_arr, s_arr, m_arr);

        if (areEqual(arr, M_arr, s_arr, m_arr))
            cout << "NO" <<endl;
        else
            cout << "YES" <<endl;

        
    }
}