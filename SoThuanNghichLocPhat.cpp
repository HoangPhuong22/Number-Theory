#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(int n)
{
    int ans = 0 , rev = 0;
    int tmp = n , sum = 0;
    while(n)
    {
        int r = n % 10;
        rev += r;
        sum = sum * 10 + r;
        if(r == 6) ++ans;
        n /= 10;
    }
    return ans >= 1 && (rev % 10 == 8) && tmp == sum;
}

int main()
{
    int a , b ; cin >> a >> b;
    for(int i = a ; i <= b ; i++)
    {
        if(check(i)) cout << i << " ";
    }
}
