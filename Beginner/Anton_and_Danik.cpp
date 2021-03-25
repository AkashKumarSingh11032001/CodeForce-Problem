#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    char ch[N+1];
    cin >> ch;

    int A_count = 0;
    int D_count = 0;

    for (int i = 0; ch[i] != 0; i++)
    {

        if (ch[i] == 'A')
        {
            A_count++;
        }
        else if (ch[i] == 'D')
        {
            D_count++;
        }
    }

    if (A_count > D_count)
    {
        cout << "Anton" << endl;
    }
    else if (A_count < D_count)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}