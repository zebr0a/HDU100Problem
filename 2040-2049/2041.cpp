// 看到这个题的第一眼想法是这道题是个dp
// 然后尝试用DFS找一下数据
// 发现竟然是个斐波那契额
// 没注意开始时第一级楼梯WA了一发

#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
typedef long long LL;

LL dp[40+7];
// LL dfs(int i, int n)
// {
//     if(i == n) return 1;
//     if(i > n) return 0;
//     LL res = 0;
//     res += dfs(i+1, n);
//     res += dfs(i+2, n);
//     return dp[i] = res;

// }

int main()
{
    memset(dp, 0, sizeof(dp));
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int num;
        scanf("%d", &num);
        // printf("%d\n", dfs(0, num));
        dp[0] = 0;
        dp[1] = 0;
        dp[2] = 1;
        dp[3] = 2;
        for(int i=4; i<=40; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        printf("%d\n", dp[num]);
    }



    return 0;
}