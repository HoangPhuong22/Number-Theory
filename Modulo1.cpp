#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int MOD = 1e9 + 7;
ll x , y , d ;
void Try(ll a , ll b)
{
    if(b == 0)
    {
        x = 1;
        y = 0;
        d = a;
    }
    else
    {
        Try(b , a % b);
        
        ll tmp = x;
        
        x = y;
        
        y = tmp - a / b * y;
    }
}
int main()
{
    ll a , b; cin >> a >> b;
    Try(a , b);
    if(d == 1) cout << (x % b + b) % b;
    else cout << -1;
    return 0;
}
