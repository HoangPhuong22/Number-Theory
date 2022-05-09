#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll n)
{
    while(n)
    {
        int r = n % 10;
        
        if(r != 6 && r!= 0 && r != 8)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    ll n ; cin >> n;
    if(check(n)) cout << 1;
    else cout << 0;
}
