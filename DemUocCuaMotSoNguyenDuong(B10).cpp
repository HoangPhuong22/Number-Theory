#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    int t ; cin >> t;
    ll res = 1;
    while(t--)
    {
        int p , e ; cin >> p >> e;
        res *= (e + 1);
        res %= MOD;
    }
    cout << res;
    return 0;
}
