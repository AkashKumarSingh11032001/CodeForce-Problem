#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int T;
    cin >> T;
    while (T--)
    {
        /* code */
        long long int N, M, f = 1, count = 0,tem;
        cin >> N >>M;
        map<long long int,long long int> M1;
        vector<long long int> v;

        for(long long int i = 0; i<N; i++){
            cin >> tem;
            M1[tem]++;
            v.push_back(tem);
        }
        for (long long int i = 0; i < M; i++)
        {
            /* code */
            cin >> tem;
            M1[tem] = 0;
            v.push_back(tem);

        }
        sort(v.begin(), v.end());
        for (auto i : v)
        {
            /* code */
            if(M1[i] != f){
                if(f == 1){
                    f = 0;
                }else{
                    f = 1;
                }
                count++;
            }
        }
        cout << count <<endl ;
        
        
    }
    
}