#include <bits/stdc++.h>
using namespace std;

int main() {

    string s1, s2;
    cin >> s1;
    cin >> s2;

    bool res = lexicographical_compare(s1.begin(),s1.end(), s2.begin(), s2.end());
    if(res == true) {
        cout << "-1" <<endl;
    }else if () {
        cout << "0" <<endl;
    }else {
        cout << "1" <<endl;
    }


}