#include <bits/stdc++.h>

using namespace std;
const int N = 110;

int dp[N][N];
int a[N][N];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        memset(dp, 0, sizeof(dp));
        for(int i=n; i > 0; i--)
        {
            for(int j=1; j <= i; j++)
            {
                dp[i][j] = max(dp[i+1][j], dp[i+1][j+1]) + a[i][j];
            }
        }
        printf("%d\n", dp[1][1]);
    }


    return 0;
}