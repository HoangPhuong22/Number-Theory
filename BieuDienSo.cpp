#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
	int n; cin >> n;
	for(int i = 0 ; i <= n / 111 ; i++)
	{
		ll res = n - i * 111;
		if(res % 11 == 0)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
    return 0;
}
