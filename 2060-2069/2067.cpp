#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 40;
typedef long long LL;

LL a[N][N];

int main()
{
    int n;
    int cnt = 1;
    while(scanf("%d", &n), n != -1)
    {
        for(int i=0; i<N; i++)
        {
            a[i][0] = 1;    // 棋盘边上的点只有一条路径
            a[0][i] = 1;
        }
        for(int i=1; i<N; i++)
        {
            for(int j=1; j<i; j++)
            {
                a[i][j] = a[i-1][j] + a[i][j-1];
            }
            a[i][i] = a[i][i-1];
        }
        // a[n][n] = a[n][n-1];

        printf("%d %d %lld\n", cnt++, n, 2 * a[n][n]);


    }


    return 0;
}