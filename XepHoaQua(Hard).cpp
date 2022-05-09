#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

ll gt[1000001];

ll powMod(ll a , ll b , ll m)
{
    a %= m;
    ll res = 1;
    
    while(b)
    {
        if(b % 2 == 1)
        {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}

int main()
{
    gt[0] = 1;
    for(int i = 1 ; i <= 1000000 ; i++)
    {
        gt[i] = gt[i - 1] * i;
        gt[i] %= MOD;
    }
    ll n , k1 , k2 , k3 , k4 ; cin >> n >> k1 >> k2 >> k3 >> k4;
    ll res = ((gt[k1] % MOD) * (gt[k2] % MOD)) % MOD;
    ll sum = ((gt[k3] % MOD) * (gt[k4] % MOD)) % MOD;
    ll r = ((res % MOD) * (sum % MOD)) % MOD;
    ll k = powMod(r , MOD - 2 , MOD);
    cout << ((gt[n] % MOD) * (k % MOD)) % MOD;
    return 0;
}
