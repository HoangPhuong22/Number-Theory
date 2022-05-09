#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int prime[100001];
void sang()
{
    for(int i = 1 ; i <= 1e5 ; i++)
    {
        prime[i] = i;
    }
    
    for(int i = 2 ; i <= sqrt(1e5) ; i++)
    {
        if(prime[i] == i)
        {
            for(int j = i * i ; j <= 1e5 ; j += i)
            {
                if(prime[j] == j)
                {
                    prime[j] = i;
                }
            }
        }
    }
}
int main()
{
    int n ; cin >> n;
    sang();
    for(int i = 1 ; i <= n ; i++)
    {
        cout << prime[i] << endl;
    }
    return 0;
}
