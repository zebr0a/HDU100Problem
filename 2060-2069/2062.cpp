#include <cstdio>

using namespace std;
typedef long long LL;

LL n;  // 元素的个数
LL m;  
int s[20+7];  // 分组后每组的首元素

LL g[20+7];  // 分组后每组子集的个数

void init()
{
    g[0] = 0;
    for(int i=1; i<27; i++)
        g[i] = g[i-1] * (i-1) + 1;
}

int main()
{
    init();
    while(scanf("%lld %lld", &n, &m) != EOF)
    {
        for(int i=0; i<27; i++)
            s[i] = i;
        while(n>0 && m>0) // 只有n个元素最多执行n次，或者执行到m=0
        {
            // 第m个子集在分组后在第t组
            int t = m / g[n] + (m%g[n]>0?1:0);
            if(t > 0)
            {
                printf("%d", s[t]);
                for(int i=t; i<=n; i++)     // 删除i以后，i之后的要加一，比如删除2，那么下次的第二组开头是3
                    s[i] = s[i+1];
                // 减去1 - t-1组无用的和删除i后当前组第一个元素变成的空集。方便在当前组内重新分组，并重新定位t
                m = m - ((t-1)*g[n] + 1);  
                if(m == 0)  printf("\n");   // 格式控制
                else printf(" ");
            }
             n --;   // 循环每执行一次减一,因为删除了一个元素
        }
       
    }


    return 0;
}