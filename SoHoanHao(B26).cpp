#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ans[10];

bool check(ll n)
{
    for(ll i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}
void soHoanHao()
{
    int k = 0;
    for(int i = 1 ; i <= 32 ; i++)
    {
        if(check(i))
        {
            ll tmp = pow(2 , i) - 1;
            if(check(tmp))
            {
                ll res = tmp * pow(2 , i - 1);
                ans[k] = res;
                ++k;
            }
        }
    }
}
int main()
{
    ll n ; cin >> n;
    soHoanHao();
    for(int i= 0 ; i < 10 ; i++)
    {
        if(n == ans[i])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
