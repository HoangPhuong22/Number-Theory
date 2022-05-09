#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}
bool check2(int n)
{
    int sum = 0;
    while(n)
    {
        int r = n % 10;
        if(r != 2 && r != 3 && r != 5 && r!= 7) return false;
        sum += r;
        n /= 10;
    }
    return check(sum);
}
int main()
{
    int a , b ; cin >> a >> b;
    int res = 0;
    for(int i = a ; i <= b ; i++)
    {
        if(check2(i) && check(i))
        {
            ++res;
        }
    }
    cout << res;
}
