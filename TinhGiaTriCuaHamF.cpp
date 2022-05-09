#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
	ll n ; cin >> n;
	if(n % 2 == 0) cout << n / 2;
	else cout << (n - 1) / 2 - n;
    return 0;
}
