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

int main()
{
    sang();
    int t ; cin >> t;
    while(t--)
    {
        int n ; cin >> n;
        for(int i = 2 ; i <= n / 2 ; i++)
        {
            if(prime[i] && prime[n - i])
            {
                cout << i << " " << n - i << endl;
            }
        }
    }
}
