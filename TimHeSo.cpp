#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

//Code by : Hoang Phuong!
ll x , y , d;
void precision(ll a , ll b)
{
    if(b == 0)
    {
        x = 1 ; y = 0 ; d = a;
    }
    else
    {
        precision(b , a % b);
        ll tmp = x;
        x = y;
        y = tmp - a / b * y;
    }
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll a , b , p ; cin >> a >> b >>p;
    precision(a , b);
    if((x + y) % 2 == 0) cout << "YES";
    else cout << "NO";
    return 0;
}
