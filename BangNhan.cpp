#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;


ll check(ll x , ll n)
{
    ll ans = 0;
    if(x == 1) return 1;
    for(ll i = 1 ; i <= sqrt(x) ; i++)
    {
        if(x % i == 0)
        {
            if(x / i == i)
            {
                if(i <= n) ++ans;
            }
            else
            {
                if(x / i <= n && i <= n) ans += 2;
            }
        }
    }
   return ans;
}
int main()
{
    ll n , x ; cin >> n >> x;
    cout << check(x , n);
    return 0;
}
