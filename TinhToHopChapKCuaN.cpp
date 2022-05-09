#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

ll powMod(ll a , ll b , ll m)
{
    ll res = 1;
    a %= m;
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
ll dao(ll a , ll m)
{
    return powMod(a , m - 2 , m);
}
ll X[1000001];
void gt()
{
    X[0] = 1;
    for(int i = 1 ; i <= 1000000 ; i++)
    {
          X[i] = i * X[i - 1];
           X[i] %= MOD;
      }
}
int main()
{
    int t ; t = 1;
    gt();
    while(t--)
    {
        ll n , k ; cin >> n >> k;
        cout << X[n] % MOD * dao(X[k] * X[n - k] % MOD , MOD) % MOD << endl;
    }
    return 0;
}