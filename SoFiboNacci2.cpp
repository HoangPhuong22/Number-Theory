#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
	ll dp[94];
	ll n ; cin >> n;
	dp[0] = 0 ; dp[1] = 1;
	for(int i = 2 ; i <= 92 ; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	for(int i = 0 ; i <= 92 ; i++)
	{
		if(dp[i] == n)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}