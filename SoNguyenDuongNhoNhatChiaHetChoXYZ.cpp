#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

ll gcd(ll a , ll b)
{
    if(b == 0) return a;
    return gcd(b , a % b);
}
ll lcm(ll a , ll b)
{
    return a / gcd(a , b) * b;
}
int main()
{
    ll n , x , y , z ; cin>> x >> y >> z >> n;
    ll res = lcm(x , lcm(y , z));
    ll m = (ll)pow(10 , n - 1);
    ll kq = 1ll*(m + res - 1) / res * res;
    if(kq < pow(10 , n)) cout << kq;
    else cout << -1;
    return 0;
}
