#include <bits/stdc++.h>
using namespace std;

int prime[10000001];

void sang()
{
    for(int i = 1 ; i <= 10000000 ; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    
    for(int i = 2 ; i <= sqrt(1e7) ; i++)
    {
        if(prime[i])
        {
            for(int j = i * i ; j <= 1e7 ; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
bool check(int n)
{
    while(n)
    {
        int r = n % 10;
        
        if(r != 2 && r != 3 && r != 5 && r != 7) return false;
        
        n /= 10;
    }
    return true;
}
int main()
{
    sang();
    int a , b ; cin >> a >> b;
    int ans = 0;
    for(int i = a ; i <= b ; i++)
    {
        if(prime[i] && check(i))
        {
            ++ans;
        }
    }
    cout << ans;
}
