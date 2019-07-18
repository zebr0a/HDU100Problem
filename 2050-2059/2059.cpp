#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;
const int INF = 0x3f3f3f3f;

double dp[100+7];
int dis[100+7]; // 每个充电站到起点的距离

int main()
{
    int l;
    while(scanf("%d", &l) != EOF)
    {
        int n, c, t;    // 充电站的个数，充完电行驶的距离，充电所需时间
        int vr, vt1, vt2; // 兔子的速度，骑车速度，脚蹬速度
        scanf("%d %d %d", &n, &c, &t);
        scanf("%d %d %d", &vr, &vt1, &vt2);

        dis[0] = 0;
        dis[n+1] = l;
        for(int i=1; i<=n; i++)
            scanf("%d", &dis[i]);
        // memset(dp, 0x3f, sizeof(dp)); double类型不能用memset 
        dp[0] = 0;
        for(int i=1; i<107; i++)
            dp[i] = INF;
        
        double tmp;
        for(int i=1; i<=n+1; i++)
        {
            for(int j=0; j<i; j++)
            {
                int len = dis[i] - dis[j];  // 两个充电站之间的距离
                if(len <= c)
                    tmp = 1.0 * len / vt1;
                else
                    tmp = 1.0 * c/vt1 + 1.0 * (len-c) / vt2;
                if(j != 0)
                    tmp += t;
                dp[i] = min(dp[j]+tmp, dp[i]);
            }
        }
        double tr = 1.0 * l /vr;    // 兔子所用时间
        if(dp[n+1] > tr)
            printf("Good job,rabbit!\n");
        else
            printf("What a pity rabbit!\n");
    }


    return 0;
}