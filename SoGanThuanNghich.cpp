#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

ll thuanNghich(ll n)
{
	ll sum =  0;
	while(n)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	return sum;
}
bool check(ll n)
{
	int res = n % 10;
	ll sum = 0 ; n /= 10;
	while(n >= 10)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	if((res == n * 2 || res * 2 == n) && sum == thuanNghich(sum)) return true;
	else return false;
}
int main()
{
	ll n ; cin >> n;
	if(check(n)) cout << "YES";
	else cout << "NO";
    return 0;
}
