#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    for(int i=0;i<t;i++){
        for(int j=0; j<n;j++){
            if(s[j]=='G' && s[j-1]=='B'){
				swap(s[j-1],s[j]);
                ++j;
			}
        }
    }
    cout <<s;

}