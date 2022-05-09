#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    ll n ; cin >> n;
    int a[10]; memset(a , 0 , sizeof(a));
    ll tmp = 0;
    while(n)
    {
        int r = n % 10;
        tmp = tmp * 10 + r;
        if(r == 5 || r == 2 || r == 7 || r == 3)
        {
            a[r]++;
        }
        n /= 10;
    }
    for(int i = 2 ; i <= 7 ; i++)
    {
        if(a[i] != 0) cout << i << " "<< a[i] << endl;
    }
    cout << endl;
    while(tmp)
    {
        int r = tmp % 10;
        if(r == 5 || r == 2 || r == 7 || r == 3)
        {
            if(a[r] != 0) 
            {
                cout << r << " " << a[r] << endl;
                a[r] = 0;
            }
        }
        tmp /= 10;
    }
    return 0;
}
