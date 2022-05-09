#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll tongUoc(ll n)
{
    ll ans = 0;
    for(int i = 1 ; i <= sqrt(n) ; ++i)
    {
        if(n % i == 0)
        {
            ans += i;
            
            if(n / i != i)
            {
                ans += n / i;
            }
        }
    }
    return ans;
}

int main()
{
    ll n ; cin >> n;
    cout << tongUoc(n);
    
}
