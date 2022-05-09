#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int maxn = 1e7 + 1;

int prime[maxn];

void sang()
{
    for(int i = 1 ; i<= maxn ; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    
    for(int i = 2 ; i <= sqrt(maxn) ; i++)
    {
        if(prime[i])
        {
            for(int j = i * i ; j <= maxn ; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
bool check(int n)
{
    int tmp = n % 10 ; n /= 10;
    while(n)
    {
        int r = n % 10;
        if(r > tmp) return false;
        n /= 10;
    }
    return true;
}
int main()
{
    sang();
    int n; cin >> n;
    int ans = 0;
    for(int i = 2 ; i <= n ; i++)
    {
        if(prime[i] && check(i))
        {
            cout << i << " ";
            ++ans;
        }
    }
    cout << endl;
    cout << ans ;
}
