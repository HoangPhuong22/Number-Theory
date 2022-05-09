#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

bool soMayMan(ll n)
{
    while(n != 0)
    {
        ll p = n % 10;
        
        if(!(p == 4 || p == 7)) return false;
        
        n /= 10;
    }
    
    return true;
}
bool check(ll n)
{
    for(ll i = 1; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            if(soMayMan(i)) return true;
            
            if(n / i != i)
            {
                if(soMayMan(n / i)) return true;
            }
        }
    }
    
    return false;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll n ; cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
    return 0;
}
