#include <bits/stdc++.h>
using namespace std;

int main () {

    int T;
    cin >> T;

    string opr;
    int X = 0;

    while (T--)
    {
        /* code */
        
        cin >> opr;
        if(opr[1] == '+'){  //just you need to see unchnanged data that is either "+" or  "-" 
            ++X;
        }else{
            --X;
        }

    }
    cout << X <<endl;
    
}