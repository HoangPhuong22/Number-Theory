#include <bits/stdc++.h>
using namespace std;

int uocNTo(int n)
{
    int res = n;
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0)
            {
                res = i;
                n /= i;
            }
        }
    }
    if(n != 1) res = n;
    
    return res;
}

int main()
{
    int t ; cin >> t;
    while(t--)
    {
        int n ; cin >> n;
        cout << uocNTo(n) << endl;
    }
    return 0;
}
