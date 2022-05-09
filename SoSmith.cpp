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
int tong(ll n)
{
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool check2(ll n)
{
    int sum = 0;
    ll tmp = n;
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        while(n % i == 0)
        {
            sum += tong(i);
            n /= i;
        }
    }
    if(n != 1) sum += tong(n);
    
    return tong(tmp) == sum;
}
int main()
{
    ll n ; cin >> n;
    if(check2(n) && !check(n))
    {
        cout << "YES";
    }
    else cout << "NO";
}
