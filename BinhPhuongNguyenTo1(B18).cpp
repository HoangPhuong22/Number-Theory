#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(int n)
{
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            int cnt = 0;
            while(n % i == 0)
            {
                ++cnt;
                n /= i;
            }
            if(cnt >= 2) return true;
        }
    }
    return false;
}

int main()
{
    int a , b ; cin >> a >> b;
    for(int i = a ; i <= b ; i++)
    {
        if(check(i)) cout << i << " ";
    }
}
