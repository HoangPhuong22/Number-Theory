#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    ll n ; cin >> n;
    ll res = n;
    for(ll i= 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0)
            {
                n /= i;
            }
            res -= (res / i);
        }
    }
    if(n != 1) res -= res/n;
    cout << res;
    return 0;
}
