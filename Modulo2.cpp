#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

ll powMod(ll a , ll b)
{
    a %= MOD; ll res = 1;
    while(b != 0)
    {
        if(b % 2 == 1)
        {
            res *= a;
            res %= MOD;
        }
        a *= a;
        a %= MOD;
        b /= 2;
    }
    
    return res;
}
int main()
{
    ll a ; cin >> a;
    cout << powMod(a , MOD - 2);
    return 0;
}
