/*
利用数组建立二位矩阵，按行列搜索。
 */

#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int a[1000+7][100+7];
int main()
{
    int n, m;
    while(scanf("%d%d", &m, &n) != EOF)
    {
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int ans = 0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(abs(a[i][j]) > ans)
                    ans = abs(a[i][j]);
            }
        }
        int x, y;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(abs(a[i][j]) == ans)
                {
                     x = i, y = j;
                     goto out;
                }
            }
        }
        out:
        printf("%d %d %d\n", x+1, y+1, a[x][y]);
    }

    return 0;
}