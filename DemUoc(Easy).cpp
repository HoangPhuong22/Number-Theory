#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

//Code by : Hoang Phuong!
ll cnt[1000001];
void sang()
{
    for(ll i = 2 ; i <= 1e6; i++)
    {
        cnt[i] = i;
    }
    
    for(ll i = 2 ; i <= sqrt(1e6) ; i++)
    {
        for(ll j = i * i ; j <= 1e6 ; j += i)
        {
            if(cnt[j] == j)
            {
                cnt[j] = i;
            }
        }
    }
}
ll uoc[1000001] = {0};
int main()
{
    ll n ; cin >> n;
    ll a[n] ; sang(); ll Max = 0;
    for(ll &x : a)
    {
        cin >> x;
        
        while(x != 1)
        {
            ll tmp = cnt[x];
            Max = max(tmp , Max);
            ll cnt = 0;
            
            while(x % tmp == 0)
            {
                ++cnt;
                x /= tmp;
            }
            
            uoc[tmp] += cnt;
        }
    }
    ll res = 1;
    for(ll i = 2 ; i <= Max ; i++)
    {
        res *= (uoc[i] + 1);
        res %= MOD;
    }
    cout << res;
    return 0;
}
