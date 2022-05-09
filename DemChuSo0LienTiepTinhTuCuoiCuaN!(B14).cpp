#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
typedef long long ll;

ll chuSo(ll n)
{
    ll ans = 0;
    for(ll i = 5 ; i <= n ; i *= 5)
    {
        ans += n / i;
        ans %= MOD;
    }
    return ans;
}

int main()
{
    ll n ; cin >> n;
    cout << chuSo(n);
    return 0;
}
