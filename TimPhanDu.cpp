#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

ll x , y , d;
void precision(ll a , ll b)
{
    if(b == 0)
    {
        x = 1 ; y = 0; d = a;
    }
    else
    {
        precision(b , a % b);
        
        ll tmp = x;
        x = y;
        y = tmp - a / b * y;
    }
}
ll powMod(ll a , ll b, ll m)
{
    a %= m; ll res = 1;
    while(b != 0)
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
    ll a , b , c , m ; cin >> a >> b >> c >> m;
    ll k = powMod(a , b , m);
    precision(c , m);
    ll g = (x % m + m) % m;
    
    cout << ((k % m) * (g % m)) % m;
    return 0;
}
