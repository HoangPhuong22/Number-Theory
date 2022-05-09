#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll n)
{
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}
int main()
{
    ll  n ; cin >> n;
    int res = 0;
    for(ll i = 2 ; i <= sqrt(n) ; i++)
    {
        if(check(i))
        {
            ++res;
        }
    }
    cout << res;
}
