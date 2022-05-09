#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

ll C[1001][1001];

void toHop()
{
    for(int i = 0 ; i <= 1000 ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            if(i == j || j == 0) C[i][j] = 1;
            else
            {
                C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
                C[i][j] %= MOD;
            }
        }
    }
}
int main()
{
    int n ; cin >> n;
    toHop();
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
