#include <bits/stdc++.h>
using namespace std;

int main()
{

    int year;
    cin >> year;
    int once, tens, hundred, thous;
    if (year >= 1000 && year <= 9000)
    {

        while (++year)
        {
            /* code */
            once = year % 10;
            tens = (year / 10) % 10;
            hundred = (year / 100) % 10;
            thous = year / 1000;

            if (once != tens && tens != hundred && hundred != thous && thous != once && once != hundred && once != thous && tens != thous)
            {
                cout << year << endl;
                break;
            }
        }
    }
}