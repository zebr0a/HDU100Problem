#include <bits/stdc++.h>

using namespace std;
const int N = 30;
typedef long long LL;

LL a[N];
LL c[N][N];

void tri()  // 杨辉三角求组合数
{
    for(int i=1; i<N; i++)
    {
        c[i][0] = c[i][i] = 1;
        for(int j=1; j<i; j++)
            c[i][j] = c[i-1][j] + c[i-1][j-1];
    }
}


int main()
{
    tri();
    a[1] = 0;
    a[2] = 1;
    for(int i=3; i<N; i++)
    {
        a[i] = (i-1) * (a[i-1] + a[i-2]);
    }

    int n;
    while(scanf("%d", &n), n)
    {
        LL res = 0;
        for(int i=0; i<=n/2; i++)
        {
            res += c[n][i] * a[i];
        }
        printf("%lld\n", res+1);
    }


    return 0;
}