#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    ll n ; cin >> n;
    for(ll i = 1 ; i <= n ;i++)
    {
        ll res = i*i * (i*i - 1) / 2;
        cout << res - 4*(i - 1)*(i - 2) << endl;
    }
    return 0;
}
