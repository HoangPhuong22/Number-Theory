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
    for(ll i = 2 ; i <= sqrt(n) ; i++)
    {
        if(check(i))
        {
            cout << i * i << " ";
        }
    }
}
