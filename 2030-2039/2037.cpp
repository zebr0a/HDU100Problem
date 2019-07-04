// 贪心思想，优先选择结束时间早的

#include <cstdio>
#include <algorithm>
using namespace std;

struct node {
    int s, e;
};
struct node a[100+7];

bool cmp(node a1, node a2)
{
    if(a1.e == a2.e)
        return a1.s < a2.s;
    return a1.e < a2.e;
}
int main()
{
    int n;
    while(scanf("%d", &n), n)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d %d", &a[i].s, &a[i].e);
        }
        sort(a, a+n, cmp);
        int ans = 1;
        node e = a[0];
        for(int i=1; i<n; i++)
        {
            if(a[i].s >= e.e)
            {
                e = a[i];
                ans ++;
            }
        }
        printf("%d\n", ans);

    }    


    return 0;
}