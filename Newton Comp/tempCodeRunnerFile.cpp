
#include<bits/stdc++.h>
using namespace std;


int count_minimum_operations(long long n)
{

	
	int count = 0;
	while (n > 1) {

		
		if (n % 3 == 0)
			n /= 3;

		
		else if (n % 3 == 1)
			n--;
		else {
			if (n == 2)
				n--;
			
			
			else
				n++;
		}

		
		count++;
	}
	return count;
}


int main()
{

	long long n ;
    cin >> n;
	long long ans = count_minimum_operations(n);
	cout<<ans<<endl;
	return 0;
}

