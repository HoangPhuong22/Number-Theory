#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

//Code by : Hoang Phuong!

long mod(ll a , ll b , ll m)
{
    ll res = 1 ;
    
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
ll gt[1000001];
    
int main()
{
    ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    gt[1] = 1;
    for(ll i = 2 ; i <= 1000001 ; i++)
    {
        gt[i] = gt[i - 1] * i;
        
        gt[i] %= MOD;
    }
    
    string s ; cin >> s;
    
    ll a[256] = {0};
    
    for(ll i = 0 ; i < s.length(); i++)
    {
        a[s[i]]++;
    }
    
    ll sum = 1;
    
    for(ll i = 0 ; i < 256 ; i++)
    {
        if(a[i] > 0)
        {
            sum *= gt[a[i]];
            
            sum %= MOD;
        }
    }
    
    ll res = mod(sum , MOD - 2 , MOD);
    
    cout << ((gt[s.length()] % MOD ) * (res % MOD) ) % MOD;
    return 0;
}