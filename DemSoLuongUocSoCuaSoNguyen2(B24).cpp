#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Dem(ll n)
{
    ll ans = 1;
    
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            int cnt = 0;
            while(n % i == 0)
            {
                ++cnt;
                n /= i;
            }
            ans *= (cnt + 1);
        }
    }
    if(n != 1) ans *= 2;
    return ans;
}

int main()
{
    ll n ; cin >> n;
    cout << Dem(n);
}
