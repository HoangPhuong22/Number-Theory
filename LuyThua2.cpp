#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

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
    int t ; cin >>t;
    while(t--)
    {
        int a , b , c ; cin >> a >> b >> c;
        ll r = powMod(b , c , MOD - 1);
        cout << powMod(a , r , MOD) << endl;
    }
    return 0;
}
