#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a , b ; cin >> a >> b;
    for(ll i = sqrt(a) ; i <= sqrt(b) ; i++)
    {
        if(i * i >= a && i * i <= b)
        {
            cout << i * i << " ";
        }
    }
}
