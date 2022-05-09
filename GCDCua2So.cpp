#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
int cnt[1000001];
int main()
{
    int n; cin >> n ;
    memset(cnt , 0 , sizeof(cnt));
    int res = 0;
    for(int i = 0 ; i < n ;i++)
    {
        int x ; cin >> x;
        cnt[x]++;
        res = max(x , res);
    }
    for(int i = res ; i >= 1 ; i--)
    {
        int dem = 0;
        for(int j = 0 ; j <= res ; j += i)
        {
            dem += cnt[j];
            if(dem >= 2) 
            {
                cout << i ;
                return 0;
            }
        }
    }
    return 0;
}
