#include <bits/stdc++.h>
using namespace std;

bool thuanNghich(int n)
{
    int tmp = n;
    int rev = 0;
    while(n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == tmp;
}
bool check(int n)
{
    int ans = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0)
            {
                n /= i;
            }
            ++ans;
        }
    }
    if(n != 1) ++ans;
    
    return ans >= 3;
}
int main()
{
    int a , b ; cin >> a >> b;
    int ok = 0;
    for(int i = a ; i <= b ; i++)
    {
        if(thuanNghich(i) && check(i))
        {
            cout << i << " ";
            ok = 1;
        }
    }
    if(ok == 0) cout << -1;
    return 0;
}
