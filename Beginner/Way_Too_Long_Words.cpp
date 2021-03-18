#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    while (n--)
    {

        string word;
        cin >> word;
        //cout << word.length() << endl;
        if (word.length() > 10)
        {
            int mid_size = word.length() - 2;
            int full_size = word.length();
            cout << word[0] << mid_size << word[full_size - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
    return 0;
}